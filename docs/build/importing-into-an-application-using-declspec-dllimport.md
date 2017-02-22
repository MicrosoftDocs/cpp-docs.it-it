---
title: "Importazione in un&#39;applicazione tramite __declspec(dllimport) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__declspec"
  - "dllimport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec(dllimport) (parola chiave) [C++]"
  - "importazione di DLL [C++], __declspec(dllimport)"
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Importazione in un&#39;applicazione tramite __declspec(dllimport)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un programma che utilizza i simboli pubblici definiti da una DLL, per definizione li importa.  Quando si creano i file di intestazione per applicazioni che utilizzano le DLL in fase di compilazione, utilizzare **\_\_declspec\(dllimport\)** nelle dichiarazioni dei simboli pubblici.  La parola chiave **\_\_declspec\(dllimport\)** funziona sia quando si esegue l'esportazione con i file def che quando si utilizza la parola chiave **\_\_declspec\(dllexport\)**.  
  
 Per rendere il codice più leggibile, definire una macro per **\_\_declspec\(dllimport\)**, quindi utilizzarla per dichiarare ciascun simbolo importato:  
  
```  
#define DllImport   __declspec( dllimport )  
  
DllImport int  j;  
DllImport void func();  
```  
  
 L'utilizzo di **\_\_declspec\(dllimport\)** è facoltativo nelle dichiarazioni di funzioni, ma consente al compilatore di produrre un codice più efficiente.  È tuttavia necessario utilizzare **\_\_declspec\(dllimport\)** per consentire all'eseguibile di importazione di accedere agli oggetti e ai simboli di dati pubblici della DLL.  Tenere presente che gli utenti della DLL devono collegarsi a una libreria di importazione.  
  
 È possibile utilizzare lo stesso file di intestazione per la DLL e per l'applicazione client.  A questo scopo, utilizzare uno speciale simbolo del preprocessore che indica se è in corso la compilazione della DLL o dell'applicazione client.  Di seguito è riportato un esempio.  
  
```  
#ifdef _EXPORTING  
   #define CLASS_DECLSPEC    __declspec(dllexport)  
#else  
   #define CLASS_DECLSPEC    __declspec(dllimport)  
#endif  
  
class CLASS_DECLSPEC CExampleA : public CObject  
{ ... class definition ... };  
```  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)