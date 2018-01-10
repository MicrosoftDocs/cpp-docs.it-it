---
title: Classe directory_iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- filesystem/std::experimental::filesystem::directory_iterator
- filesystem/std::experimental::filesystem::_Directory_iterator::_Directory_iterator
- filesystem/std::experimental::filesystem::directory_iterator::directory_iterator
- filesystem/std::experimental::filesystem::directory_iterator::increment
- filesystem/std::experimental::filesystem::directory_iterator::operator=
- filesystem/std::experimental::filesystem::directory_iterator::operator==
- filesystem/std::experimental::filesystem::directory_iterator::operator!=
- filesystem/std::experimental::filesystem::directory_iterator::operator*
- filesystem/std::experimental::filesystem::directory_iterator::operator-&gt;
- filesystem/std::experimental::filesystem::directory_iterator::operator++
dev_langs: C++
ms.assetid: dca2ecf8-3e69-4644-a83d-705061e10cc8
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
helpviewer_keywords:
- std::experimental::filesystem::directory_iterator
- std::experimental::filesystem::_Directory_iterator::_Directory_iterator
- std::experimental::filesystem::directory_iterator
- std::experimental::filesystem::directory_iterator::directory_iterator
- std::experimental::filesystem::directory_iterator::increment
- std::experimental::filesystem::directory_iterator::operator=
- std::experimental::filesystem::directory_iterator::operator==
- std::experimental::filesystem::directory_iterator::operator!=
- std::experimental::filesystem::directory_iterator::operator*
- std::experimental::filesystem::directory_iterator::operator-&gt;
- std::experimental::filesystem::directory_iterator::operator++
ms.workload: cplusplus
ms.openlocfilehash: 2c490c3a56cfcff17d965a9cd635a92fff7f5a95
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="directoryiterator-class"></a>Classe directory_iterator
Descrive un iteratore di input sequenziato attraverso i nomi file in una directory. Per un iteratore X, l'espressione *X restituisce un oggetto della classe directory_entry che esegue il wrapping di un nome file e tutto ciò che si conosce sul relativo stato.  
  
 La classe archivia un oggetto di tipo path, denominato in questo esempio mydir a scopo illustrativo, che rappresenta il nome della directory da sequenziare e un oggetto di tipo directory_entry denominato myentry in questo esempio, che rappresenta il nome file corrente nella sequenza di directory. Un oggetto costruito predefinito di tipo directory_entry ha un nome del percorso mydir vuoto e rappresenta l'iteratore di fine sequenza.  
  
 Ad esempio, data la directory abc con le voci def e ghi, il codice:  
  
 `for (directory_iterator next(path("abc")), end; next != end; ++next)     visit(next->path());`  
  
 chiamerà visit con gli argomenti path("abc/def") e path("abc/ghi").  
  
 Per altre informazioni ed esempi di codice, vedere [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++)).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class directory_iterator;  
```  
  
## <a name="directoryiteratordirectoryiterator"></a>directory_iterator::directory_iterator  
  
```  
directory_iterator() noexcept;  
explicit directory_iterator(const path& pval);

directory_iterator(const path& pval, error_code& ec) noexcept;  
directory_iterator(const directory_iterator&) = default;  
directory_iterator(directory_iterator&&) noexcept = default;  
```  
  
 Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano pval in mydir e quindi provano ad aprire e leggere mydir come una directory. Se l'esito è positivo, archiviano il primo nome file nella directory in myentry; in caso contrario, producono un iteratore di fine sequenza.  
  
 I costruttori impostati come predefiniti si comportano come previsto.  
  
## <a name="directoryiteratorincrement"></a>directory_iterator::increment  
  
```  
directory_iterator& increment(error_code& ec) noexcept;  
```  
  
 La funzione prova a avanzare al nome file successivo nella directory. Se l'esito è positivo, archivia questo nome file in myentry; in caso contrario, produce un iteratore di fine sequenza.  
  
## <a name="directoryiteratoroperator"></a>directory_iterator::operator!=  
  
```  
bool operator!=(const directory_iterator& right) const;
```  
  
 L'operatore membro restituisce !(*this == right).  
  
## <a name="directoryiteratoroperator"></a>directory_iterator::operator=  
  
```  
directory_iterator& operator=(const directory_iterator&) = default;  
directory_iterator& operator=(directory_iterator&&) noexcept = default;  
```  
  
 Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.  
  
## <a name="directoryiteratoroperator"></a>directory_iterator::operator==  
  
```  
bool operator==(const directory_iterator& right) const;
```  
  
 L'operatore membro restituisce true solo se entrambi *this e right sono iteratori di fine sequenza o se entrambi non lo sono.  
  
## <a name="directoryiteratoroperator"></a>directory_iterator::operator*  
  
```  
const directory_entry& operator*() const;
```  
  
 L'operatore membro restituisce myentry.  
  
## <a name="directoryiteratoroperator-"></a>directory_iterator::operator->  
  
```  
const directory_entry * operator->() const;
```  
  
 La funzione membro restituisce &**this.  
  
## <a name="directoryiteratoroperator"></a>directory_iterator::operator++  
  
```  
directory_iterator& operator++();
directory_iterator& operator++(int);
```  
  
 La prima funzione membro chiama increment() e quindi restituisce *this. La secondo funzione membro esegue una copia dell'oggetto, chiama increment() e quindi restituisce la copia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<experimental/filesystem>  
  
 **Spazio dei nomi:** std::experimental::filesystem  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem>](../standard-library/filesystem.md)   
 [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))

