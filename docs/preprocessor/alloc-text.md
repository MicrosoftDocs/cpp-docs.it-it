---
title: alloc_text | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.alloc_text
- alloc_text_CPP
dev_langs:
- C++
helpviewer_keywords:
- alloc_text pragma
- pragmas, alloc_text
ms.assetid: 1fd7be18-e4f7-4f70-b079-6326f72b871a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a1e07b630254d7691321443a74973e06ed50ae2d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33912771"
---
# <a name="alloctext"></a>alloc_text
Assegnare un nome alla sezione di codice in cui devono essere presenti le definizioni di funzioni specificate. Il pragma deve essere trovarsi tra un dichiaratore di funzione e la definizione di funzione per le funzioni denominate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma alloc_text( "  
textsection  
", function1, ... )  
```  
  
## <a name="remarks"></a>Note  
 Il **alloc_text** pragma non consente di gestire le funzioni membro di C++ o funzioni in overload. È applicabile solo alle funzioni dichiarate con collegamento C, vale a dire le funzioni dichiarate con la **extern "C"** specifiche di collegamento. Se si tenta di utilizzare questo pragma in una funzione con collegamento C++, viene generato un errore del compilatore.  
  
 Poiché tramite indirizzamento funzione `__based` non è supportato, specificare i percorsi della sezione richiede l'utilizzo del **alloc_text** pragma. Il nome specificato da *textsection* deve essere racchiuso tra virgolette doppie.  
  
 Il **alloc_text** pragma deve trovarsi dopo le dichiarazioni di qualsiasi delle funzioni specificate e prima delle definizioni di queste funzioni.  
  
 Funzioni a cui fa riferimento un **alloc_text** pragma deve essere definito nello stesso modulo del pragma. Se questa operazione non viene eseguita e una funzione non definita viene compilata in seguito in una sezione del testo diversa, l'errore può essere individuato o meno. Sebbene il programma in genere venga eseguito correttamente, la funzione non verrà allocata nelle sezioni desiderate.  
  
 Altre limitazioni sul **alloc_text** sono i seguenti:  
  
-   Non può essere utilizzato in una funzione.  
  
-   Deve essere utilizzato dopo che la funzione è stata dichiarata, ma prima che la funzione sia stata definita.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)