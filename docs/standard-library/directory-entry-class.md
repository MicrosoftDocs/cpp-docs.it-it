---
title: "Classe directory_entry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::directory_entry"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator const std::experimental::filesystem::v1::path &"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::directory_entry"
  - "std::experimental::filesystem::v1::directory_entry::directory_entry"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator="
  - "std::experimental::filesystem::v1::directory_entry::operator="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::assign"
  - "std::experimental::filesystem::v1::directory_entry::assign"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::replace_filename"
  - "std::experimental::filesystem::v1::directory_entry::replace_filename"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::path"
  - "std::experimental::filesystem::v1::directory_entry::path"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::status"
  - "std::experimental::filesystem::v1::directory_entry::status"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::symlink_status"
  - "std::experimental::filesystem::v1::directory_entry::symlink_status"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator<"
  - "std::experimental::filesystem::v1::directory_entry::operator<"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator=="
  - "std::experimental::filesystem::v1::directory_entry::operator=="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator!="
  - "std::experimental::filesystem::v1::directory_entry::operator!="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator<="
  - "std::experimental::filesystem::v1::directory_entry::operator<="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator>"
  - "std::experimental::filesystem::v1::directory_entry::operator>"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_entry::operator>="
  - "std::experimental::filesystem::v1::directory_entry::operator>="
dev_langs: 
  - "C++"
ms.assetid: 1827c67b-4137-4548-adb0-f955f7acaf08
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe directory_entry
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto restituito da `*X`, dove *X* è una classe [directory\_iterator](../standard-library/directory-iterator-class.md) o [recursive\_directory\_iterator](../standard-library/recursive-directory-iterator-class.md).  
  
## Sintassi  
  
```  
class directory_entry;  
```  
  
## Note  
 La classe archivia un oggetto di tipo [classe path](../standard-library/path-class-cpp-standard-template-library.md).`path` può essere un oggetto [path](../standard-library/path-class-cpp-standard-template-library.md) o un tipo derivato da `path`. Archivia anche due valori [file\_type](../Topic/file_type%20Enumeration.md): uno che rappresenta ciò che si conosce sullo stato del nome file archiviato e uno che rappresenta ciò che si conosce sullo stato del collegamento simbolico del nome file.  
  
 Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md).  
  
## assign  
  
```  
void assign(const PFX path& pval,  
    file_status stat_arg = file_status(),  
    file_status symstat_arg = file_status());  
```  
  
 La funzione membro assegna pval a mypath, stat a mystat e symstat a mysymstat.  
  
## directory\_entry  
  
```  
directory_entry() = default;  
directory_entry(const directory_entry&) = default;  
directory_entry(directory_entry&&) noexcept = default;  
explicit directory_entry(const PFX path& pval,  
    file_status stat_arg = file_status(),  
    file_status symstat_arg = file_status());  
```  
  
 I costruttori impostati come predefiniti si comportano come previsto. Il quarto costruttore inizializza mypath in pval, mystat in stat\_arg e mysymstat in symstat\_arg.  
  
## operator\!\=  
  
```  
bool operator!=(const directory_entry& right) const noexcept;  
  
```  
  
 La funzione membro restituisce \!\(\*this \=\= right\).  
  
## operator\=  
  
```  
directory_entry& operator=(const directory_entry&) = default;  
directory_entry& operator=(directory_entry&&) noexcept = default;  
  
```  
  
 Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.  
  
## operator\=\=  
  
```  
bool operator==(const directory_entry& right) const noexcept;  
```  
  
 La funzione membro restituisce mypath \=\= right.mypath.  
  
## operator\<  
  
```  
  
bool operator<(const directory_entry& right) const noexcept;  
  
```  
  
 La funzione membro restituisce mypath \< right.mypath.  
  
## operator\<\=  
  
```  
bool operator<=(const directory_entry& right) const noexcept;  
```  
  
 La funzione membro restituisce \!\(right \< \*this\).  
  
## operator\>  
  
```  
bool operator>(const directory_entry& right) const noexcept;  
```  
  
 La funzione membro restituisce right \< \*this.  
  
## operator\>\=  
  
```  
bool operator>=(const directory_entry& right) const noexcept;  
  
```  
  
 La funzione membro restituisce \!\(\*this \< right\).  
  
## operator const path\_type&  
  
```  
operator const path&() const; // retained  
```  
  
 L'operatore membro restituisce mypath.  
  
## path  
  
```  
const PFX path& path() const noexcept;  
```  
  
 La funzione membro restituisce mypath.  
  
## replace\_filename  
  
```  
void replace_filename(const PFX path& pval,  
    file_status stat_arg = file_status(),  
    file_status symstat_arg = file_status());  
```  
  
 La funzione membro sostituisce mypath con mypath.parent\_path\(\) \/ pval, mystat con stat\_arg e mysymstat con symstat\_arg  
  
## status  
  
```  
file_status status() const;  
file_status status(  
    error_code& ec) const noexcept;  
Otherwise, mystat = status(mypval).  
  
```  
  
 Entrambe le funzioni membro restituiscono mystat probabilmente prima modificato nel modo seguente:  
  
1.  If status\_known\(mystat\) then do nothing.  
  
2.  In caso contrario, if \!status\_known\(mysymstat\) && \!is\_symlink\(mysymstat\) then mystat \= mysymstat.  
  
## symlink\_status  
  
```  
file_status symlink_status() const;  
file_status symlink_status(  
    error_code& ec) const noexcept;  
```  
  
 Entrambe le funzioni membro restituiscono mysymstat probabilmente prima modificato nel modo seguente:If status\_known\(mysymstat\) then do nothing. In caso contrario, mysymstat \= symlink\_status\(mypval\).  
  
## Requisiti  
 **Intestazione:** filesystem  
  
 **Spazio dei nomi:** std::tr2::sys  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem\>](../standard-library/filesystem.md)