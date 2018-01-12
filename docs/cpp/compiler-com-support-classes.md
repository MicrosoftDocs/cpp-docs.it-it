---
title: Classi di supporto COM del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_raise_error
dev_langs: C++
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9560b4b3a0623a0e712d5b54d2bbe5de7dbc17e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-com-support-classes"></a>Classi di supporto COM del compilatore
**Sezione specifica Microsoft**  
  
 Le classi standard vengono utilizzate per supportare alcuni tipi COM. Le classi vengono definite in comdef.h e i file di intestazione vengono generati dalla libreria di tipi.  
  
|Classe|Scopo|  
|-----------|-------------|  
|[bstr_t](../cpp/bstr-t-class.md)|Esegue il wrapping del tipo `BSTR` per fornire operatori e metodi utili.|  
|[com_error](../cpp/com-error-class.md)|Definisce l'oggetto errore generato da [com_raise_error](../cpp/com-raise-error.md) nella maggior parte degli errori.|  
|[com_ptr_t](../cpp/com-ptr-t-class.md)|Incapsula i puntatori a interfaccia COM e automatizza le chiamate richieste a `AddRef`, **versione**, e `QueryInterface`.|  
|[variant_t](../cpp/variant-t-class.md)|Esegue il wrapping di **VARIANT** tipo per fornire operatori e metodi utili.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto COM del compilatore](../cpp/compiler-com-support.md)   
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)