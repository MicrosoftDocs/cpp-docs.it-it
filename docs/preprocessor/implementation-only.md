---
title: implementation_only | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: implementation_only
dev_langs: C++
helpviewer_keywords: implementation_only attribute
ms.assetid: d8cabc86-4425-45a0-9587-d57536980088
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7a033cd4b1618c2da106bb641f55c9ae967cd53a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implementationonly"></a>implementation_only
**Sezione specifica C++**  
  
 Elimina la generazione del file di intestazione con estensione tlh (file di intestazione primario).  
  
## <a name="syntax"></a>Sintassi  
  
```  
implementation_only  
```  
  
## <a name="remarks"></a>Note  
 Questo file contiene tutte le dichiarazioni utilizzate per esporre il contenuto della libreria dei tipi. Il file di intestazione con estensione .tli, con le implementazioni delle funzioni membro wrapper, verrà generato e incluso nella compilazione.  
  
 Quando questo attributo viene specificato, il contenuto dell'intestazione con estensione .tli si trova nello stesso spazio dei nomi di quello utilizzato in genere nell'intestazione .tlh. Inoltre, le funzioni membro non vengono dichiarate come inline.  
  
 Il `implementation_only` attributo deve essere utilizzato in combinazione con il [no_implementation](../preprocessor/no-implementation.md) attributo come un modo di mantenere le implementazioni da file di intestazione precompilata (PCH). Un'istruzione `#import` con l'attributo `no_implementation` si trova nell'area di origine utilizzata per creare il PCH. Il PCH risultante viene utilizzato da una serie di file di origine. Un'istruzione `#import` con l'attributo `implementation_only` viene quindi utilizzata all'esterno dell'area PCH. È necessario utilizzare questa istruzione una sola volta in uno dei file di origine. In questo modo verranno generate tutte le funzioni membro wrapper necessarie senza ricompilazione aggiuntiva per ogni file di origine.  
  
> [!NOTE]
>  L'attributo `implementation_only` in un'istruzione `#import` deve essere utilizzato insieme a un'altra istruzione `#import`, della stessa libreria dei tipi, con l'attributo `no_implementation`. In caso contrario, verranno generati errori del compilatore. Questo perché le definizioni di classe wrapper generate dall'istruzione `#import` con l'attributo `no_implementation` sono necessarie per compilare le implementazioni generate dall'attributo `implementation_only`.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)