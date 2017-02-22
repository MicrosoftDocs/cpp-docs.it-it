---
title: "/Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocit&#224; codice) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.FavorSizeOrSpeed"
  - "/os"
  - "VC.Project.VCCLCompilerTool.FavorSizeOrSpeed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Os (opzione del compilatore) [C++]"
  - "/Ot (opzione del compilatore) [C++]"
  - "velocità codice"
  - "Ottimizza per velocità codice (opzione del compilatore) [C++]"
  - "Ottimizza per dimensione codice (opzione del compilatore) [C++]"
  - "Os (opzione del compilatore) [C++]"
  - "-Os (opzione del compilatore) [C++]"
  - "Ot (opzione del compilatore) [C++]"
  - "-Ot (opzione del compilatore) [C++]"
  - "ottimizzazione del codice macchina"
ms.assetid: 9a340806-fa15-4308-892c-355d83cac0f2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /Os, /Ot (Ottimizza per dimensione codice, Ottimizza per velocit&#224; codice)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Riduce o ingrandisce le dimensioni dei file exe e delle DLL.  
  
## Sintassi  
  
```  
/Os  
/Ot  
```  
  
## Note  
 **\/Os** \(Ottimizza per dimensione codice\) riduce le dimensioni dei file exe e delle DLL indicando al compilatore di ottimizzare per dimensione anziché per velocità.  Il compilatore può ridurre molti costrutti C e C\+\+ a sequenze funzionalmente simili di codice macchina.  Talvolta queste differenze offrono dei compromessi tra dimensione e velocità.  Le opzioni **\/Os** e **\/Ot** consentono di specificare una preferenza:  
  
 **\/Ot** \(Ottimizza per velocità codice\) aumenta la velocità dei file exe e delle DLL indicando al compilatore di ottimizzare per velocità anziché per dimensione. Questa è l'impostazione predefinita. Il compilatore può ridurre molti costrutti C e C\+\+ a sequenze funzionalmente simili di codice macchina.  In alcuni casi queste differenze rappresentano un compromesso tra la dimensione e la velocità.  L'opzione \/Ot è implicita nell'opzione Ottimizza velocità \([\/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)\).  L'opzione **\/O2** riunisce varie opzioni che consentono di generare codice a velocità elevata.  
  
 Se si utilizza **\/Os** o **\/Ot**, per ottimizzare il codice è necessario specificare anche [\/Og](../../build/reference/og-global-optimizations.md).  
  
> [!NOTE]
>  Le informazioni raccolte dall'esecuzione dei test di profilatura eseguiranno l'override delle ottimizzazioni altrimenti attive se si specifica **\/Ob**, **\/Os** o **\/Ot**.  Per ulteriori informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md).  
  
 **Sezione specifico x86**  
  
 Nell'esempio riportato di seguito viene illustrata la differenza tra le opzioni Ottimizza per dimensione codice \(**\/Os**\) e Ottimizza per velocità codice \(**\/Ot**\):  
  
> [!NOTE]
>  Nell'esempio riportato di seguito viene descritto il comportamento previsto quando si utilizza **\/Os** o **\/Ot**.  A seconda della versione di rilascio, tuttavia, il comportamento del compilatore può offrire ottimizzazioni diverse per il codice riportato di seguito.  
  
```  
/* differ.c  
  This program implements a multiplication operator  
  Compile with /Os to implement multiply explicitly as multiply.  
  Compile with /Ot to implement as a series of shift and LEA instructions.  
*/  
int differ(int x)  
{  
    return x * 71;  
}  
```  
  
 Come illustrato nel frammento di codice macchina riportato sotto, quando DIFFER.c viene ottimizzato per la dimensione \(**\/Os**\), il compilatore implementa l'espressione di moltiplicazione nell'istruzione return in modo esplicito per produrre una sequenza di codice breve, ma lenta:  
  
```  
mov    eax, DWORD PTR _x$[ebp]  
imul   eax, 71                  ; 00000047H  
```  
  
 Viceversa, quando DIFFER.c viene ottimizzato per la velocità \(**\/Ot**\), il compilatore implementa l'espressione di moltiplicazione nell'istruzione return come una serie di istruzioni shift e `LEA` per generare una sequenza di codice più lunga, ma veloce:  
  
```  
mov    eax, DWORD PTR _x$[ebp]  
mov    ecx, eax  
shl    eax, 3  
lea    eax, DWORD PTR [eax+eax*8]  
sub    eax, ecx  
```  
  
 **END x86 Specific**  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Ottimizza per dimensione o velocità**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)