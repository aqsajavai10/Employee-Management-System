package net.javaguides.springboot.service;

import java.util.ArrayList;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.stereotype.Service;
import net.javaguides.springboot.repository.*;
import net.javaguides.springboot.model.*;



@Service
public class UserDetailsServiceImpl implements UserDetailsService {

 @Autowired
 private UserRepository userRepository;

 @Override
 public UserDetails loadUserByUsername(String email) throws UsernameNotFoundException {
     User user = userRepository.findByEmail(email)
             .orElseThrow(() -> new UsernameNotFoundException("User not found with email: " + email));
     return new org.springframework.security.core.userdetails.User(user.getEmail(), user.getPassword(), new ArrayList<>());
 }
 
 
 
 public User saveUser(User user) {
     return userRepository.save(user);
 }

}
