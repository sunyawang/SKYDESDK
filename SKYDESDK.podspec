Pod::Spec.new do |s|
  s.name         = "SKYDESDK"
  s.version      = "1.0.0"
  s.summary      = "The package of useful tools, include categories and classes"
  s.homepage     = ""
  s.license      = "MIT"
  s.authors      = { 'yeven' => 'sunyawang1990@gmail.com'}
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/sunyawang/SKYDESDK", :tag => s.version }
  s.source_files = 'SKYDESDK', 'SKYDESDK/**/*.{h,m,a}'
  s.requires_arc = true
end