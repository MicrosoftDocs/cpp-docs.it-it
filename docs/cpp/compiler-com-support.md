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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: d81c54f7af604024da852999ca78fa5ee55079ef
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
