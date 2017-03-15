---
title: "/V (Numero versione) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/v"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/V (opzione del compilatore) [C++]"
  - "incorporamento di stringhe di versione"
  - "V (opzione del compilatore) [C++]"
  - "-V (opzione del compilatore) [C++]"
  - "numeri di versione, specifica per OBJ"
ms.assetid: 3e93fb7a-5dfd-49a6-bd49-3dca8052e0f3
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# /V (Numero versione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incorpora una stringa di testonel file obj.  Deprecata.  
  
## Sintassi  
  
```  
/Vstring  
```  
  
## Argomenti  
 `string`  
 Una stringa che specifica il numero di versione o le informazioni sul copyright da incorporare in un file obj.  
  
## Note  
 La stringapuò apporre al file obj un'etichetta con un numero di versione o informazioni sul copyright.  Ogni spazio o carattere di tabulazione deve essere racchiuso tra doppie virgolette \("\), se fa parte della stringa.  Una barra \(\\\) deve precedere le doppie virgolette \("\), se fa parte della stringa.  Uno spazio tra **\/V** e `string` è facoltativo.  
  
 Per inserire il nome e il numero di versione del compilatore nel file obj, è inoltre possibile utilizzare [comment](../../preprocessor/comment-c-cpp.md) con l'argomento del tipo di commento del compilatore.  
  
 **\/V** è deprecata; **\/V** veniva utilizzata principalmente per il supporto della compilazione di driver di dispositivi virtuali \(VxDs\), funzione non più supportata dal set di strumenti di [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)].  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)