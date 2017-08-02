---
title: Accesso non corretto a un&quot;unione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: b273d984-62a8-4003-9a87-bf0149d3f2dd
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 9e3bd236cfc6675f9476a0127977e329af3698af
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="improper-access-to-a-union"></a>Accesso non corretto a un'unione
**ANSI 3.3.2.3** L'accesso a un membro di un oggetto unione viene eseguito usando un membro di un tipo diverso  
  
 Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili.  
  
 Ad esempio, viene dichiarata un'unione di **float** e `int`. Un valore **float** viene archiviato, ma in seguito il programma accede al valore come `int`. In una situazione del genere il valore dipende dall'archiviazione interna di valori **float**. L'Integer non sarebbe affidabile.  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
