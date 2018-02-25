---
title: Classe sample container | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- container classes [C++]
ms.assetid: 5b1451f2-c708-45da-bbf0-9e42fd687a1a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0d528f53747979da7b95d8d3298a43ea717007a5
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="sample-container-class"></a>Classe contenitore di esempio
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).  
  
 Descrive un oggetto che controlla una sequenza di elementi di lunghezza variabile, in genere di tipo **Ty**. La sequenza viene archiviata in modi diversi, a seconda del contenitore effettivo.  
  
 Un costruttore contenitore o una funzione membro può chiamare il costruttore **Ty**(**const Ty&**) o la funzione **Ty::operator=**(**const Ty&**). Se tale chiamata genera un'eccezione, l'oggetto contenitore ha l'obbligo di mantenere l'integrità e di generare nuovamente tutte le eccezioni che intercetta. È possibile scambiare, assegnare, cancellare o eliminare in modo sicuro un oggetto contenitore dopo che genera una di queste eccezioni. In linea generale non è tuttavia possibile prevedere in altro modo lo stato della sequenza controllata dall'oggetto contenitore.  
  
 Alcune avvertenze aggiuntive:  
  
-   Se l'espressione **~Ty** genera un'eccezione, lo stato risultante dell'oggetto contenitore non è definito.  
  
-   Se il contenitore è un oggetto allocatore archiviato *al*, e *al* genera un'eccezione diversa da in seguito a una chiamata a * * al**.allocate**, lo stato risultante del contenitore oggetto non è definito.  
  
-   Se il contenitore archivia un oggetto funzione *comp*per determinare come ordinare la sequenza controllata e *comp* genera un'eccezione di qualsiasi tipo, lo stato risultante dell'oggetto contenitore non è definito.  
  
 Le classi contenitore definite dalla libreria standard C++ soddisfano diversi requisiti aggiuntivi, come descritto nei paragrafi seguenti.  
  
 La classe modello contenitore [list](../standard-library/list-class.md) garantisce un comportamento deterministico e utile, anche in presenza delle eccezioni descritte in precedenza. Se ad esempio viene generata un'eccezione durante l'inserimento di uno o più elementi, il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.  
  
 Per *tutte* le classi contenitore definite dalla libreria standard C++, se viene generata un'eccezione durante le chiamate alle funzioni membro seguenti:  
  
```  
<A NAME="vclrfcontainerinsert"></A>insert // single element inserted  
<A NAME="vclrfcontainerpushback"></A>push_back  
<A NAME="vclrfcontainerpushfront"></A>push_front  
```  
  
 il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.  
  
 Per *tutte* le classi contenitore definite dalla libreria standard C++, non viene generata alcuna eccezione durante le chiamate alle funzioni membro seguenti:  
  
```  
<A NAME="vclrfcontainerpopback"></A>pop_back  
<A NAME="vclrfcontainerpopfront"></A>pop_front  
```  
  
 La funzione membro [erase](../standard-library/container-class-erase.md) genera un'eccezione solo se un'operazione di copia (costruzione di copia o assegnazione) genera un'eccezione.  
  
 Non viene inoltre generata alcuna eccezione durante la copia di un iteratore restituito da una funzione membro.  
  
 La funzione membro [swap](../standard-library/container-class-swap.md) per *tutte* le classi contenitore definite dalla libreria standard C++ garantisce quanto segue:  
  
-   La funzione membro genera un'eccezione solo se il contenitore archivia un oggetto allocatore al e `al` genera un'eccezione quando viene copiato.  
  
-   I riferimenti, i puntatori e gli iteratori che designano elementi delle sequenze controllate che vengono scambiate restano validi.  
  
 Un oggetto di una classe di contenitori definita dalla libreria standard C++ alloca e libera la memoria per la sequenza che controlla tramite un oggetto archiviato di tipo `Alloc`, che in genere è un parametro di modello. Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe **allocator\<Ty>**. In particolare `Alloc` deve essere dello stesso tipo di **Alloc::rebind<value_type>::other**  
  
 Per *tutte* le classi contenitore definite dalla libreria standard C++, la funzione membro **Alloc get_allocator const;** restituisce una copia dell'oggetto allocatore archiviato. Si noti che l'oggetto allocatore archiviato *non* viene copiato dopo l'assegnazione dell'oggetto contenitore. Tutti i costruttori inizializzano il valore archiviato in **allocator** su `Alloc` se il costruttore non contiene alcun parametro allocatore.  
  
 In base allo standard C++, per una classe di contenitori definita nella libreria standard C++ si può presupporre quanto segue:  
  
-   Tutti gli oggetti della classe `Alloc` risultano uguali.  
  
-   Il tipo **Alloc::const_pointer** è uguale a **const Ty \***.  
  
-   Il tipo **Alloc::const_reference** è uguale a **const Ty&**.  
  
-   Il tipo **Alloc::pointer** è uguale a **Ty \***.  
  
-   Il tipo **Alloc::reference** è uguale a **Ty&**.  
  
 In questa implementazione, tuttavia, i contenitori non si basano su presupposti semplificati. Funzionano pertanto correttamente con gli oggetti allocatore più ambiziosi:  
  
-   Gli oggetti della classe `Alloc` non devono risultare tutti uguali. È possibile mantenere più pool di archiviazione.  
  
-   Il tipo **Alloc::const_pointer** non deve essere uguale a **const Ty \***. Un puntatore const può essere una classe.  
  
-   Il tipo **Alloc::pointer** non deve essere uguale a **Ty \***. Un puntatore può essere una classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \<sample container>  
  
## <a name="see-also"></a>Vedere anche  
 [\<sample container>](../standard-library/sample-container.md)

