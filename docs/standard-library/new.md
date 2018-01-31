---
title: '&lt;new&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: <new>
dev_langs: C++
helpviewer_keywords: new header
ms.assetid: 218e2a15-34e8-4ef3-9122-1e90eccf8559
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 263c6ec455c55492425617d2ffee499655a727dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltnewgt"></a>&lt;new&gt;
Definisce diversi tipi e funzioni che controllano l'allocazione e la liberazione di spazio di archiviazione nel controllo del programma. Definisce inoltre i componenti per la segnalazione degli errori di gestione della memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <new>  
  
```  
  
## <a name="remarks"></a>Note  
 Alcune delle funzioni dichiarate in questa intestazione sono sostituibili.  L'implementazione fornisce una versione predefinita, il cui comportamento è illustrato in questo documento.  Un programma può, tuttavia, definire una funzione con la stessa firma per sostituire la versione predefinita in fase di collegamento. La versione di sostituzione deve soddisfare i requisiti descritti in questo documento.  
  
### <a name="objects"></a>Oggetti  
  
|||  
|-|-|  
|[nothrow](../standard-library/new-functions.md#nothrow)|Fornisce un oggetto da usare come argomento per le versioni `nothrow` di **new** e **delete**.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[new_handler](../standard-library/new-typedefs.md#new_handler)|Tipo che punta a una funzione appropriata per l'uso come nuovo gestore.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[set_new_handler](../standard-library/new-functions.md#set_new_handler)|Installa una funzione utente che viene chiamata quando una nuova funzione non riesce nel tentativo di allocare memoria.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator delete](../standard-library/new-operators.md#op_delete)|Funzione chiamata da un'espressione delete per rendere nuovamente disponibile l'archiviazione di singoli oggetti.|  
|[operator delete&#91;&#93;](../standard-library/new-operators.md#op_delete_arr)|Funzione chiamata da un'espressione delete per deallocare memoria per una matrice di oggetti.|  
|[operator new](../standard-library/new-operators.md#op_new)|La funzione chiamata da un'espressione new per allocare memoria per singoli oggetti.|  
|[operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr)|La funzione chiamata da un'espressione new per allocare memoria per una matrice di oggetti.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe bad_alloc](../standard-library/bad-alloc-class.md)|La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.|  
|[Classe nothrow_t](../standard-library/nothrow-t-structure.md)|La classe viene usata come parametro di funzione per l'operatore new per indicare che la funzione deve restituire un puntatore null per segnalare un errore di allocazione, invece di generare un'eccezione.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)


