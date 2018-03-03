---
title: Supporto COM del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 76a78442-f2a4-4985-9967-67e20773f847
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b05fdff690f8693e926011c3bc7d1738ee9be66c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-com-support"></a>Supporto COM del compilatore
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Il compilatore di Visual C++ è in grado di leggere direttamente le librerie dei tipi COM (Component Object Model) e di tradurre il contenuto in codice sorgente C++ che può essere incluso nella compilazione. Sono disponibili estensioni del linguaggio per semplificare la programmazione COM sul lato client.  
  
 Tramite il [direttiva del preprocessore #import](../preprocessor/hash-import-directive-cpp.md), il compilatore può leggere una libreria dei tipi e convertire le interfacce in un file di intestazione C++ che descrive il modello COM come classi. È disponibile un set di attributi `#import` per il controllo utente del contenuto dei file di intestazione delle librerie dei tipi risultanti.  
  
 È possibile utilizzare il [declspec](../cpp/declspec.md) degli attributi estesa [uuid](../cpp/uuid-cpp.md) per assegnare un identificatore univoco globale (GUID) a un oggetto COM. La parola chiave [uuidof](../cpp/uuidof-operator.md) può essere utilizzato per estrarre il GUID associato a un oggetto COM. Un altro `__declspec` attributo [proprietà](../cpp/property-cpp.md), può essere usato per specificare il **ottenere** e **impostare** metodi per un membro dati di un oggetto COM.  
  
 Viene fornito un set di classi e funzioni globali di supporto COM per supportare il **VARIANT** e `BSTR` tipi, implementare i puntatori intelligenti e per incapsulare l'oggetto errore generato da `_com_raise_error`:  
  
-   [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)  
  
-   [bstr_t](../cpp/bstr-t-class.md)  
  
-   [com_error](../cpp/com-error-class.md)  
  
-   [com_ptr_t](../cpp/com-ptr-t-class.md)  
  
-   [variant_t](../cpp/variant-t-class.md)  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)   
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)