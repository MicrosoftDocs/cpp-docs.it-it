---
title: implementation_only | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- implementation_only
dev_langs:
- C++
helpviewer_keywords:
- implementation_only attribute
ms.assetid: d8cabc86-4425-45a0-9587-d57536980088
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0496a1f76a763ae7c7a2e95c1b68fa08089e2c4f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374026"
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
  
Il **implementation_only** attributo deve essere utilizzata in combinazione con la [no_implementation](../preprocessor/no-implementation.md) attributo allo scopo di mantenere le implementazioni fuori dal file di intestazione precompilata (PCH). Un'istruzione `#import` con l'attributo `no_implementation` si trova nell'area di origine utilizzata per creare il PCH. Il PCH risultante viene utilizzato da una serie di file di origine. Un' `#import` istruzione con il **implementation_only** attributo viene quindi usato all'esterno dell'area PCH. È necessario utilizzare questa istruzione una sola volta in uno dei file di origine. In questo modo verranno generate tutte le funzioni membro wrapper necessarie senza ricompilazione aggiuntiva per ogni file di origine.  
  
> [!NOTE]
> Il **implementation_only** attributo in uno `#import` istruzione deve essere utilizzato in combinazione con un altro `#import` istruzione della stessa libreria dei tipi, con la `no_implementation` attributo. In caso contrario, verranno generati errori del compilatore. Infatti, le definizioni delle classi wrapper generati dal `#import` istruzione con il `no_implementation` attributo sono necessari per compilare le implementazioni generate dalle **implementation_only** attributo.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)