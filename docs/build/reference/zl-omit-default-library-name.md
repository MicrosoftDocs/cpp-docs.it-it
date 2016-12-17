---
title: "/Zl (Omette il nome della libreria predefinita) | Microsoft Docs"
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
  - "/zi"
  - "VC.Project.VCCLCompilerTool.OmitDefaultLibName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zl (opzione del compilatore) [C++]"
  - "librerie predefinite, omissione di nomi"
  - "Omette il nome della libreria predefinita (opzione del compilatore)"
  - "ZI (opzione del compilatore)"
  - "-Zl (opzione del compilatore) [C++]"
ms.assetid: b27d39d0-44d6-498c-84ae-27c1326fee59
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zl (Omette il nome della libreria predefinita)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Omette il nome della libreria di runtime di Microsoft Visual Studio C predefinita dal file obj.  Per impostazione predefinita, il compilatore inserisce il nome della libreria nel file obj per indirizzare il linker alla libreria corretta.  
  
## Sintassi  
  
```  
/Zl  
```  
  
## Note  
 Per ulteriori informazioni sulla libreria predefinita, vedere [Utilizzo della libreria di runtime](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
 È possibile utilizzare **\/Zl** per compilare file obj da inserire in una libreria.  Sebbene l'omissione del nome della libreria salvi solo una piccola quantità di spazio per un singolo file obj, lo spazio totale salvato è significativo in una libreria contenente molti moduli di oggetto.  
  
 Si tratta di un'opzione avanzata.  L'impostazione di questa opzione rimuove il supporto di alcune librerie di runtime C che potrebbero essere richieste dall'applicazione, generando così errori in fase di collegamento se l'applicazione dipende da tale supporto.  Se si utilizza questa opzione, è necessario fornire i componenti necessari in un altro modo.  
  
 Utilizzare [\/NODEFAULTLIB \(Ignora librerie\)](../../build/reference/nodefaultlib-ignore-libraries.md) per indicare al linker di ignorare i riferimenti a librerie in tutti i file .obj.  
  
 Per ulteriori informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
 Quando si esegue la compilazione con **\/Zl**, viene definito `_VC_NODEFAULTLIB` Di seguito è riportato un esempio.  
  
```  
// vc_nodefaultlib.cpp  
// compile with: /Zl  
void Test() {  
   #ifdef _VC_NODEFAULTLIB  
      int i;  
   #endif  
  
   int i;   // C2086  
}  
```  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Ometti nomi librerie predefinite**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)