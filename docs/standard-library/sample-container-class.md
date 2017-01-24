---
title: "Classe contenitore di esempio | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi contenitore"
ms.assetid: 5b1451f2-c708-45da-bbf0-9e42fd687a1a
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe contenitore di esempio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  In questo argomento è nella documentazione di Visual C++ come un esempio funziona dei contenitori utilizzati nella libreria C++ Standard. Per ulteriori informazioni, vedere [contenitori STL](../standard-library/stl-containers.md).  
  
 Descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi, in genere di tipo **Ty**. La sequenza viene archiviata in modi diversi, a seconda del contenitore effettivo.  
  
 Una funzione costruttore o un membro di contenitore può risultare occasione per chiamare il costruttore **Ty**(**const Ty &**) o la funzione **Ty::operator =**(**const Ty &**). Se tale chiamata genera un'eccezione, l'oggetto contenitore ha l'obbligo di mantenere l'integrità e di rigenerare tutte le eccezioni che intercetta. In modo sicuro, è possibile scambiare, assegnare, cancellare o eliminare un oggetto contenitore dopo che viene generata una di queste eccezioni. In generale, tuttavia, non può prevedere in caso contrario lo stato della sequenza controllata dall'oggetto contenitore.  
  
 Alcune considerazioni aggiuntive:  
  
-   Se l'espressione **~ Ty** genera un'eccezione, lo stato risulta dell'oggetto contenitore è definito.  
  
-   Se il contenitore archivia un oggetto allocatore *al*, e *al* genera un'eccezione diversa da come risultato una chiamata a *al***.allocate**, lo stato risulta dell'oggetto contenitore è definito.  
  
-   Se il contenitore archivia un oggetto funzione *comp*, per determinare come ordinare la sequenza controllata e *comp* genera un'eccezione di qualsiasi tipo, lo stato risulta dell'oggetto contenitore è definito.  
  
 Le classi dei contenitori definite da STL soddisfano alcuni requisiti aggiuntivi, come descritto nei paragrafi seguenti.  
  
 Classe modello contenitore [elenco](../standard-library/list-class.md) fornisce un comportamento deterministico e utile, anche in presenza di eccezioni descritte in precedenza. Ad esempio, se viene generata un'eccezione durante l'inserimento di uno o più elementi, il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.  
  
 Per *tutti* le classi dei contenitori definite dalla libreria STL, se viene generata un'eccezione durante le chiamate alle funzioni membro seguente:  
  
```  
<A NAME="vclrfcontainerinsert"></A>insert // single element inserted  
<A NAME="vclrfcontainerpushback"></A>push_back  
<A NAME="vclrfcontainerpushfront"></A>push_front  
```  
  
 il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.  
  
 Per *tutti* le classi dei contenitori definite da STL, viene generata alcuna eccezione durante le chiamate alle funzioni membro seguente:  
  
```  
<A NAME="vclrfcontainerpopback"></A>pop_back  
<A NAME="vclrfcontainerpopfront"></A>pop_front  
```  
  
 La funzione membro [erase](../standard-library/container-class-erase.md) genera un'eccezione solo se un'operazione di copia (costruzione assegnazione o copia) genera un'eccezione.  
  
 Inoltre, viene generata alcuna eccezione durante la copia di un iteratore restituito da una funzione membro.  
  
 La funzione membro [scambio](../standard-library/container-class-swap.md) rende le promesse aggiuntive per *tutti* classi contenitore definite da STL:  
  
-   La funzione membro genera un'eccezione solo se il contenitore archivia tutti un oggetto allocatore, e `al` genera un'eccezione quando viene copiata.  
  
-   I riferimenti, i puntatori e gli iteratori che definiscono gli elementi delle sequenze controllate che vengono scambiati restano validi.  
  
 Un oggetto di una classe contenitore definito da STL alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto archiviato di tipo `Alloc`, che in genere è un parametro di modello. Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe **allocatore \< Ty>**. In particolare, `Alloc` deve essere dello stesso tipo di **Alloc::rebind \< value_type >:: altri**  
  
 Per *tutti* classi contenitore definite da STL, la funzione membro **get_allocator Alloc const;** restituisce una copia dell'oggetto allocatore archiviato. Si noti che è l'oggetto allocatore archiviato *non* copiati quando viene assegnato l'oggetto contenitore. Tutti i costruttori inizializzano il valore memorizzato in **allocatore**, in `Alloc` Se il costruttore è presente alcun parametro allocatore.  
  
 In base allo Standard C++, una classe contenitore definita da STL può presupporre che:  
  
-   Tutti gli oggetti della classe `Alloc` risultano uguali.  
  
-   Tipo **Alloc::const_pointer** equivale **Ty const \***.  
  
-   Tipo **Alloc::const_reference** equivale **const Ty &**.  
  
-   Tipo **Alloc::pointer** equivale **Ty \***.  
  
-   Tipo **Alloc::reference** equivale **Ty &**.  
  
 In questa implementazione, tuttavia, i contenitori non supposizioni tale semplificazione. Pertanto, funzionano correttamente con gli oggetti allocatore di più ambiziosi:  
  
-   Tutti gli oggetti della classe `Alloc` non è necessario confrontare uguale. (È possibile gestire più pool di archiviazione).  
  
-   Tipo **Alloc::const_pointer** non è necessario essere lo stesso **Ty const \***. (Un puntatore di tipo const può essere una classe).  
  
-   Tipo **Alloc::pointer** non è necessario essere lo stesso **Ty \***. (Un puntatore può essere una classe).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \< contenitore di esempio>  
  
## <a name="see-also"></a>Vedere anche  
 [\< contenitore di esempio>](../standard-library/sample-container.md)

