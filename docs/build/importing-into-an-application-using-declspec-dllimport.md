---
title: L'importazione in un'applicazione che utilizza declspec | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __declspec
- dllimport
dev_langs: C++
helpviewer_keywords:
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9766c6088e3f99711b936b10db0443da49b52c6c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="importing-into-an-application-using-declspecdllimport"></a>Importazione in un'applicazione tramite __declspec(dllimport)
Viene considerato un programma che utilizza i simboli pubblici definiti da una DLL di importarli. Quando si crea il file di intestazione per le applicazioni che utilizzano le DLL per la compilazione, utilizzare **declspec** nelle dichiarazioni dei simboli pubblici. La parola chiave **declspec** funziona se si esporta DEF (file) o con il **dllexport** (parola chiave).  
  
 Per rendere il codice più leggibile, definire una macro per **declspec** e quindi utilizzare la macro per dichiarare ogni simbolo importato:  
  
```  
#define DllImport   __declspec( dllimport )  
  
DllImport int  j;  
DllImport void func();  
```  
  
 Utilizzando **declspec** è facoltativo per le dichiarazioni di funzione, ma il compilatore produce codice più efficiente se si utilizza questa parola chiave. Tuttavia, è necessario utilizzare **declspec** eseguibile di importazione accedere agli oggetti e simboli di dati pubblici della DLL. Si noti che gli utenti della DLL devono collegarsi con una libreria di importazione.  
  
 È possibile utilizzare lo stesso file di intestazione per la DLL e l'applicazione client. A tale scopo, utilizzare un simbolo del preprocessore speciale che indica se sono la compilazione della DLL o di compilazione dell'applicazione client. Ad esempio:  
  
```  
#ifdef _EXPORTING  
   #define CLASS_DECLSPEC    __declspec(dllexport)  
#else  
   #define CLASS_DECLSPEC    __declspec(dllimport)  
#endif  
  
class CLASS_DECLSPEC CExampleA : public CObject  
{ ... class definition ... };  
```  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)