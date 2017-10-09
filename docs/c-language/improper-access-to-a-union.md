---
title: Accesso non corretto a un'unione | Microsoft Docs
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
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 54eeffebcc20846666c6ebb6a2951f8d55a5b8c5
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="improper-access-to-a-union"></a>Accesso non corretto a un'unione
**ANSI 3.3.2.3** L'accesso a un membro di un oggetto unione viene eseguito usando un membro di un tipo diverso  
  
 Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili.  
  
 Ad esempio, viene dichiarata un'unione di **float** e `int`. Un valore **float** viene archiviato, ma in seguito il programma accede al valore come `int`. In una situazione del genere il valore dipende dall'archiviazione interna di valori **float**. L'Integer non sarebbe affidabile.  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
