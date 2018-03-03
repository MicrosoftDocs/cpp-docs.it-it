---
title: Classi di supporto COM del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_raise_error
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 54377893135c2b933c25387bccbb750d2f3eb734
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="compiler-com-support-classes"></a>Classi di supporto COM del compilatore
**Sezione specifica Microsoft**  
  
 Le classi standard vengono utilizzate per supportare alcuni tipi COM. Le classi sono definite \<Comdef. h > e i file di intestazione generati dalla libreria dei tipi.  
  
|Classe|Scopo|  
|-----------|-------------|  
|[_bstr_t](../cpp/bstr-t-class.md)|Esegue il wrapping del tipo `BSTR` per fornire operatori e metodi utili.|  
|[_com_error](../cpp/com-error-class.md)|Definisce l'oggetto errore generato da [com_raise_error](../cpp/com-raise-error.md) nella maggior parte degli errori.|  
|[_com_ptr_t](../cpp/com-ptr-t-class.md)|Incapsula i puntatori a interfaccia COM e automatizza le chiamate richieste a `AddRef`, **versione**, e `QueryInterface`.|  
|[_variant_t](../cpp/variant-t-class.md)|Esegue il wrapping di **VARIANT** tipo per fornire operatori e metodi utili.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto COM del compilatore](../cpp/compiler-com-support.md)   
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)