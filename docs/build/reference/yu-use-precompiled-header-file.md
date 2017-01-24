---
title: "/Yu (Utilizza il file di intestazione precompilato) | Microsoft Docs"
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
  - "/yu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file), utilizzo di progetti esistenti"
  - "/Yu (opzione del compilatore) [C++]"
  - "PCH (file), utilizzo di progetti esistenti"
  - "file di intestazione precompilata, utilizzo di progetti esistenti"
  - "Yu (opzione del compilatore) [C++]"
  - "-Yu (opzione del compilatore) [C++]"
ms.assetid: 24f1bd0e-b624-4296-a17e-d4b53e374e1f
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Yu (Utilizza il file di intestazione precompilato)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica al compilatore di utilizzare un file di intestazione precompilata con estensione pch esistente nella compilazione corrente.  
  
## Sintassi  
  
```  
/Yu[filename]  
```  
  
## Argomenti  
 *filename*  
 Nome di un file di intestazione, incluso nel file di origine tramite una direttiva del preprocessore **\#include**.  
  
## Note  
 Il nome del file di inclusione deve essere lo stesso sia per l'opzione **\/Yc** che crea l'intestazione precompilata, sia per qualsiasi opzione **\/Yu** successiva che indica l'utilizzo dell'intestazione precompilata.  
  
 Per **\/Yc**, `filename` specifica il punto in cui la precompilazione si interrompe. Tutto il codice viene precompilato attraverso `filename` e viene assegnato un nome all'intestazione precompilata risultante utilizzando il nome di base del file di intestazione e l'estensione pch.  
  
 Il file pch deve essere stato creato tramite **\/Yc**.  
  
 Il compilatore considera come precompilato tutto il codice che precede il file con estensione h.  Salta fino ad appena prima la direttiva **\#include** associata al file con estensione h, utilizza il codice contenuto nel file pch e quindi compila tutto il codice dopo `filename`.  
  
 Nella riga di comando non è consentito alcuno spazio tra **\/Yu** e `filename`.  
  
 Quando si specifica l'opzione **\/Yu** senza un nome file, il programma di origine deve contenere un pragma [\#pragma hdrstop](../../preprocessor/hdrstop.md) che specifica il nome file dell'intestazione precompilata, il file pch.  In questo caso, il compilatore utilizzerà l'intestazione precompilata \(file pch\) specificata da [\/Fp \(Specifica file pch\)](../../build/reference/fp-name-dot-pch-file.md).  Il compilatore salta alla posizione del pragma, ripristina lo stato compilato dal file di intestazione precompilato specificato dal pragma, quindi compila solo il codice che segue il pragma.  Se **\#pragma hdrstop** non specifica un nome file, il compilatore cerca un file con un nome derivato dal nome di base del file di origine con estensione pch.  È anche possibile utilizzare l'opzione **\/Fp** per specificare un file pch diverso.  
  
 Se si utilizza l'opzione **\/Yu** senza un nome file e non è possibile specificare un pragma **hdrstop**, verrà generato un messaggio di errore e la compilazione non avrà esito positivo.  
  
 Se le opzioni **\/Yc**`filename` e  **\/Yu**`filename` si trovano nella stessa riga di comando ed entrambe fanno riferimento allo stesso nome file, **\/Yc**`filename` avrà la precedenza, precompilando tutto il codice fino al file denominato incluso.  Questa funzionalità semplifica la scrittura di makefile.  
  
 Poiché nei file pch sono contenute informazioni sull'ambiente del computer e sugli indirizzi di memoria relative al programma, un file pch deve essere utilizzato sul computer in cui è stato creato.  
  
 Per ulteriori informazioni sulle intestazioni precompilate, vedere:  
  
-   [\/Y \(Intestazioni precompilate\)](../../build/reference/y-precompiled-headers.md)  
  
-   [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Specificare [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md) in un file cpp del progetto.  
  
2.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
3.  Fare clic sulla cartella **C\/C\+\+**.  
  
4.  Fare clic sulla pagina delle proprietà **Intestazioni precompilate**.  
  
5.  Modificare la proprietà **Crea\/Usa PCH tramite file** o la proprietà **Crea\/Usa intestazione precompilata**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.  
  
## Esempi  
 Se il codice riportato di seguito:  
  
```  
#include <afxwin.h>   // Include header for class library  
#include "resource.h" // Include resource definitions  
#include "myapp.h"    // Include information specific to this app  
...  
```  
  
 viene compilato con la riga di comando `CL /YuMYAPP.H PROG.CPP`, il compilatore non elabora le tre istruzioni di inclusione, ma utilizza codice precompilato da MYAPP.pch, con un risparmio di tempo nella pre\-elaborazione di tutti e tre i file e degli eventuali file inclusi.  
  
 È possibile utilizzare l'opzione [\/Fp \(Specifica file pch\)](../../build/reference/fp-name-dot-pch-file.md) con l'opzione **\/Yu** per specificare il nome del file pch, se diverso dall'argomento del nome file in **\/Yc** o dal nome di base del file di origine, come nell'esempio seguente:  
  
```  
CL /YuMYAPP.H /FpMYPCH.pch PROG.CPP  
```  
  
 Con questo comando si specifica un file di intestazione precompilato denominato MYPCH.pch.  Il compilatore utilizza il relativo contenuto per ripristinare lo stato precompilato di tutti i file di intestazione fino a MYAPP.h incluso.  Quindi compila il codice successivo all'istruzione **include** di MYAPP.h.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)