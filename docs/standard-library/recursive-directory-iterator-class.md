---
title: Classe recursive_directory_iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- filesystem/std::tr2::sys::recursive_directory_iterator
dev_langs:
- C++
ms.assetid: 79a061bd-5b64-404c-97e8-749c888c2ced
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 0d4325fbe8d4f336f4ca1ac6afe4ba5a96a7172d
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="recursivedirectoryiterator-class"></a>Classe recursive_directory_iterator
Descrive un iteratore di input sequenziato attraverso i nomi file in una directory del file system. L'iteratore può anche accedere alle sottodirectory. Per un iteratore X, l'espressione *X restituisce un oggetto della classe directory_entry che esegue il wrapping di un nome file e tutto ciò che si conosce sul relativo stato.  
  
 Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class recursive_directory_iterator;  
```  
  
## <a name="remarks"></a>Note  
 La classe modello archivia:  
  
1.  oggetto di tipo stack<pair\<directory_iterator, path>>, denominato mystack in questo esempio a scopo illustrativo, che rappresenta l'annidamento delle directory da ordinare in sequenza  
  
2.  un oggetto di tipo directory_entry, denominato myentry in questo esempio, che rappresenta il nome di file corrente nella sequenza di directory  
  
3.  un oggetto di tipo bool, denominato no_push in questo esempio, che registra se la discesa ricorsiva nelle sottodirectory è disabilitata  
  
4.  un oggetto di tipo directory_options, denominato myoptions in questo esempio, che registra le opzioni stabilite in fase di costruzione  
  
 Un oggetto costruito predefinito di tipo recursive_directory_entry ha un iteratore di fine sequenza in corrispondenza di mystack.top().first e rappresenta l'iteratore di fine sequenza. Ad esempio, data la directory abc con le voci def (una directory), def/ghi e jkl, il codice:  
  
```  
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)  
    visit(next->path());
```  
  
 chiamerà visit con gli argomenti `path("abc/def/ghi") and path("abc/jkl").`È possibile qualificare la sequenziazione attraverso il sottoalbero della directory, in due modi:  
  
1.  Un collegamento simbolico alla directory verrà analizzato solo se si costruisce un metodo recursive_directory_iterator con un argomento directory_options il cui valore è directory_options::follow_directory_symlink.  
  
2.  Se si chiama disable_recursion_pending, una directory successiva rilevata durante un incremento non verrà analizzata in modo ricorsivo.  
  
## <a name="recursivedirectoryiteratordepth"></a>recursive_directory_iterator::depth  
  
```  
int depth() const;
```  
  
 Restituisce mystack.size() - 1, quindi vpal è a profondità zero.  
  
## <a name="recursivedirectoryiteratordisablerecursionpending"></a>recursive_directory_iterator::disable_recursion_pending  
  
```  
void disable_recursion_pending();
```  
  
 La funzione membro archivia true in no_push.  
  
## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator!=  
  
```  
bool operator!=(const recursive_directory_iterator& right) const;
```  
  
 L'operatore membro restituisce !(*this == right).  
  
## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator=  
  
```  
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;  
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;  
```  
  
 Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.  
  
## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator==  
  
```  
bool operator==(const recursive_directory_iterator& right) const;
```  
  
 L'operatore membro restituisce true solo se entrambi *this e right sono iteratori di fine sequenza o se entrambi non lo sono.  
  
## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator*  
  
```  
const directory_entry& operator*() const;
```  
  
 L'operatore membro restituisce myentry.  
  
## <a name="recursivedirectoryiteratoroperator-"></a>recursive_directory_iterator::operator->  
  
```  
const directory_entry * operator->() const;
```  
  
 Restituisce &**this.  
  
## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator++  
  
```  
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```  
  
 La prima funzione membro chiama increment() e quindi restituisce *this. La secondo funzione membro esegue una copia dell'oggetto, chiama increment() e quindi restituisce la copia.  
  
## <a name="recursivedirectoryiteratoroptions"></a>recursive_directory_iterator::options  
  
```  
directory_options options() const;
```  
  
 Restituisce myoptions.  
  
## <a name="recursivedirectoryiteratorpop"></a>recursive_directory_iterator::pop  
  
```  
void pop();
```  
  
 Se depth() == 0 l'oggetto diventa un iteratore di fine sequenza. In caso contrario, la funzione membro termina l'analisi della directory corrente (la più profonda) e riprende dalla profondità inferiore successiva.  
  
## <a name="recursivedirectoryiteratorrecursionpending"></a>recursive_directory_iterator::recursion_pending  
  
```  
bool recursion_pending() const;
```  
  
 Restituisce !no_push.  
  
## <a name="recursivedirectoryiteratorrecursivedirectoryiterator"></a>recursive_directory_iterator::recursive_directory_iterator  
  
```  
recursive_directory_iterator() noexcept;  
explicit recursive_directory_iterator(const path& pval);

recursive_directory_iterator(const path& pval,  
    error_code& ec) noexcept;  
recursive_directory_iterator(const path& pval,  
    directory_options opts);

recursive_directory_iterator(const path& pval,  
    directory_options opts,  
    error_code& ec) noexcept;  
recursive_directory_iterator(const recursive_directory_iterator&) = default;  
recursive_directory_iterator(recursive_directory_iterator&&) noexcept = default;  
```  
  
 Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano false in no_push e directory_options::none in myoptions, quindi provano ad aprire e leggere pval come una directory. Se l'operazione riesce, i costruttori inizializzano mystack e myentry per designare il primo nome file non nella directory nella sequenza annidata; in caso contrario, producono un iteratore di fine sequenza.  
  
 Il quarto e quinto costruttore si comportano esattamente come il secondo e terzo, ad eccezione del fatto che archiviano prima opts in myoptions. I costruttori impostati come predefiniti si comportano come previsto.  
  
## <a name="recursivedirectoryiteratorincrement"></a>recursive_directory_iterator::increment  
  
```  
recursive_directory_iterator& increment(error_code& ec) noexcept;  
```  
  
 La funzione prova ad avanzare al nome file successivo nella sequenza annidata. Se l'esito è positivo, archivia questo nome file in myentry; in caso contrario, produce un iteratore di fine sequenza.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<filesystem >  
  
 **Spazio dei nomi:** std::tr2::sys  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)  (Riferimento file di intestazione)  
 [\<filesystem>](../standard-library/filesystem.md)   
 [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))


