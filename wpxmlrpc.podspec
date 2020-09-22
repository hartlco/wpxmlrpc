Pod::Spec.new do |s|
  s.name         = "wpxmlrpc"
  s.version      = "0.9.0-beta.1"
  s.summary      = "Lightweight XML-RPC library."
  s.homepage     = "https://github.com/wordpress-mobile/wpxmlrpc"
  s.license      = { :type => 'MIT', :file => 'LICENSE.md' }
  s.author       = {"Automattic" => "mobile@automattic.com"}
  s.source       = { :git => "https://github.com/wordpress-mobile/wpxmlrpc.git", :tag => "#{s.version}" }
  s.source_files = 'WPXMLRPC'
  s.swift_version = '5.0'
  s.public_header_files = [ 'WPXMLRPC/WPXMLRPC.h', 'WPXMLRPC/WPXMLRPCEncoder.h', 'WPXMLRPC/WPXMLRPCDecoder.h' ]
  s.libraries    = 'iconv'
  s.requires_arc = true
  s.ios.deployment_target = '9.0'
  s.osx.deployment_target = '10.7'
  s.tvos.deployment_target = '9.0'
end
