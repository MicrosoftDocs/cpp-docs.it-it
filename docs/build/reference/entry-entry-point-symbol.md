---
title: "/ENTRY (Simbolo del punto di ingresso) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/entry"
  - "VC.Project.VCLinkerTool.EntryPointSymbol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ENTRY (opzione del linker)"
  - "ENTRY (opzione del linker)"
  - "-ENTRY (opzione del linker)"
  - "indirizzo iniziale"
ms.assetid: 26c62ba2-4f52-4882-a7bd-7046a0abf445
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ENTRY (Simbolo del punto di ingresso)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ENTRY:function  
```  
  
## Note  
 dove:  
  
 *funzione*  
 Funzione che specifica un indirizzo iniziale definito dall'utente per un file exe o per una DLL.  
  
## Note  
 L'opzione \/ENTRY specifica una funzione del punto di ingresso come indirizzo iniziale per un file exe o DLL.  
  
 È necessario che la funzione venga definita con la convenzione di chiamata `__stdcall` I parametri e il valore restituito dipendono dal fatto che il programma sia un'applicazione console, un'applicazione Windows o una DLL.  Si consiglia di consentire l'impostazione del punto d'ingresso nel linker in modo da garantire la corretta inizializzazione della libreria di runtime del linguaggio C e l'esecuzione dei costruttori C\+\+ per gli oggetti statici.  
  
 Per impostazione predefinita l'indirizzo iniziale è un nome di funzione tratto dalla libreria di runtime del linguaggio C.  Tale indirizzo viene selezionato nel linker in base agli attributi del programma, come illustrato nella tabella che segue.  
  
|Nome della funzione|Impostazione predefinita per|  
|-------------------------|----------------------------------|  
|**mainCRTStartup** \(o **wmainCRTStartup**\)|Un'applicazione in cui viene utilizzata \/SUBSYSTEM:**CONSOLE**. Chiama **main** \(o **wmain**\).|  
|**WinMainCRTStartup** \(o **wWinMainCRTStartup**\)|Un'applicazione in cui viene utilizzata \/SUBSYSTEM:**WINDOWS**. Chiama `WinMain` \(o **wWinMain**\), da definire con `__stdcall`.|  
|**\_DllMainCRTStartup**|Una DLL. Chiama `DllMain`, da definire con `__stdcall`, se presente.|  
  
 Se l'opzione [\/DLL](../../build/reference/dll-build-a-dll.md) o [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) non è specificata, verranno automaticamente selezionati un sottosistema e un punto di ingresso, a seconda che sia definita la funzione **main** o `WinMain`.  
  
 Le funzioni **main**, `WinMain` e `DllMain` rappresentano le tre forme del punto di ingresso definito dall'utente.  
  
 Quando si crea un'immagine gestita, la funzione specificata con \/ENTRY deve disporre di una firma di \(LPVOID *var1*, DWORD *var2*, LPVOID *var3*\).  
  
 Per informazioni su come definire un punto di ingresso DllMain, vedere [Funzionamento della libreria di runtime](../../build/run-time-library-behavior.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Punto di ingresso**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EntryPointSymbol%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)