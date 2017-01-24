---
title: "Supporto COM del compilatore | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, supporto COM"
  - "COM, supporto del compilatore"
ms.assetid: 76a78442-f2a4-4985-9967-67e20773f847
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto COM del compilatore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Il compilatore di Visual C\+\+ è in grado di leggere direttamente le librerie dei tipi COM \(Component Object Model\) e di tradurre il contenuto in codice sorgente C\+\+ che può essere incluso nella compilazione.  Sono disponibili estensioni del linguaggio per semplificare la programmazione COM sul lato client.  
  
 Utilizzando la [direttiva per il preprocessore \#import](../preprocessor/hash-import-directive-cpp.md), il compilatore è in grado di leggere una libreria dei tipi e di convertirla in un file di intestazione C\+\+ che descrive le interfacce COM come classi.  È disponibile un set di attributi `#import` per il controllo utente del contenuto dei file di intestazione delle librerie dei tipi risultanti.  
  
 È possibile utilizzare l'attributo esteso [\_\_declspec](../cpp/declspec.md) [uuid](../cpp/uuid-cpp.md) per assegnare un identificatore univoco globale \(GUID\) a un oggetto COM.  La parola chiave [\_\_uuidof](../cpp/uuidof-operator.md) può essere utilizzata per estrarre il GUID associato a un oggetto COM.  Un altro attributo `__declspec`, [property](../cpp/property-cpp.md), può essere utilizzato per specificare i metodi **get** e **set** per un membro dati di un oggetto COM.  
  
 Viene fornito un set di funzioni e di classi globali del supporto COM per supportare i tipi **VARIANT** e `BSTR`, per implementare i puntatori intelligenti e per incapsulare l'oggetto errore generato da `_com_raise_error`:  
  
-   [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)  
  
-   [\_bstr\_t](../cpp/bstr-t-class.md)  
  
-   [\_com\_error](../cpp/com-error-class.md)  
  
-   [\_com\_ptr\_t](../cpp/com-ptr-t-class.md)  
  
-   [\_variant\_t](../cpp/variant-t-class.md)  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)   
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)