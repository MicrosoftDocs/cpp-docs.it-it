---
title: "Classe directory_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::directory_iterator"
  - "directory_iterator"
  - "filesystem/std::experimental::filesystem::v1::_Directory_iterator::_Directory_iterator"
  - "filesystem/std::experimental::filesystem::v1::directory_iterator"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::directory_iterator"
  - "std::experimental::filesystem::v1::directory_iterator::directory_iterator"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::increment"
  - "std::experimental::filesystem::v1::directory_iterator::increment"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::operator="
  - "std::experimental::filesystem::v1::directory_iterator::operator="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::operator=="
  - "std::experimental::filesystem::v1::directory_iterator::operator=="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::operator!="
  - "std::experimental::filesystem::v1::directory_iterator::operator!="
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::operator*"
  - "std::experimental::filesystem::v1::directory_iterator::operator*"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::operator->"
  - "std::experimental::filesystem::v1::directory_iterator::operator->"
  - "FILESYSTEM/std::experimental::filesystem::v1::directory_iterator::operator++"
  - "std::experimental::filesystem::v1::directory_iterator::operator++"
dev_langs: 
  - "C++"
ms.assetid: dca2ecf8-3e69-4644-a83d-705061e10cc8
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe directory_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un iteratore di input sequenziato attraverso i nomi file in una directory. Per un iteratore X, l'espressione \*X restituisce un oggetto della classe directory\_entry che esegue il wrapping di un nome file e tutto ciò che si conosce sul relativo stato.  
  
 La classe archivia un oggetto di tipo path, denominato in questo esempio mydir a scopo illustrativo, che rappresenta il nome della directory da sequenziare e un oggetto di tipo directory\_entry denominato myentry in questo esempio, che rappresenta il nome file corrente nella sequenza di directory. Un oggetto costruito predefinito di tipo directory\_entry ha un nome del percorso mydir vuoto e rappresenta l'iteratore di fine sequenza.  
  
 Ad esempio, data la directory abc con le voci def e ghi, il codice:  
  
 `for (directory_iterator next(path("abc")), end; next != end; ++next)     visit(next->path());`  
  
 chiamerà visit con gli argomenti path\("abc\/def"\) e path\("abc\/ghi"\).  
  
 Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md).  
  
## Sintassi  
  
```  
class directory_iterator;  
```  
  
## directory\_iterator::directory\_iterator  
  
```cpp  
directory_iterator() noexcept;  
explicit directory_iterator(const path& pval);  
directory_iterator(const path& pval,  
    error_code& ec) noexcept;  
directory_iterator(const directory_iterator&) = default;  
directory_iterator(directory_iterator&&) noexcept = default;  
```  
  
 Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano pval in mydir e quindi provano ad aprire e leggere mydir come una directory. Se l'esito è positivo, archiviano il primo nome file nella directory in myentry; in caso contrario, producono un iteratore di fine sequenza.  
  
 I costruttori impostati come predefiniti si comportano come previsto.  
  
## directory\_iterator::increment  
  
```cpp  
directory_iterator& increment(  
    error_code& ec) noexcept;  
```  
  
 La funzione prova a avanzare al nome file successivo nella directory. Se l'esito è positivo, archivia questo nome file in myentry; in caso contrario, produce un iteratore di fine sequenza.  
  
## directory\_iterator::operator\!\=  
  
```cpp  
bool operator!=(const directory_iterator& right) const;  
```  
  
 L'operatore membro restituisce \!\(\*this \=\= right\).  
  
## directory\_iterator::operator\=  
  
```cpp  
directory_iterator& operator=(const directory_iterator&) = default;  
directory_iterator& operator=(directory_iterator&&) noexcept = default;  
```  
  
 Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.  
  
## directory\_iterator::operator\=\=  
  
```cpp  
bool operator==(const directory_iterator& right) const;  
  
```  
  
 L'operatore membro restituisce true solo se entrambi \*this e right sono iteratori di fine sequenza o se entrambi non lo sono.  
  
## directory\_iterator::operator\*  
  
```cpp  
const directory_entry& operator*() const;  
```  
  
 L'operatore membro restituisce myentry.  
  
## directory\_iterator::operator\-\>  
  
```cpp  
const directory_entry *operator->() const;  
```  
  
 La funzione membro restituisce &\*\*this.  
  
## directory\_iterator::operator\+\+  
  
```cpp  
directory_iterator& operator++();  
directory_iterator& operator++(int);  
```  
  
 La prima funzione membro chiama increment\(\) e quindi restituisce \*this. La secondo funzione membro esegue una copia dell'oggetto, chiama increment\(\) e quindi restituisce la copia.  
  
## Requisiti  
 **Intestazione:** filesystem  
  
 **Spazio dei nomi:** std::experimental::filesystem::v1  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem\>](../standard-library/filesystem.md)   
 [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md)