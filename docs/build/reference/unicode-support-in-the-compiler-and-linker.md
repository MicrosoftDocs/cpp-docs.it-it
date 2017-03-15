---
title: "Supporto Unicode nel compilatore e nel linker | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.UseUnicodeResponseFiles"
  - "VC.Project.VCLibrarianTool.UseUnicodeResponseFiles"
  - "VC.Project.VCCLCompilerTool.UseUnicodeResponseFiles"
  - "VC.Project.VCXDCMakeTool.UseUnicodeResponseFiles"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unicode, Visual C++"
ms.assetid: acc1d322-56b9-4696-a30e-2af891a4e288
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Supporto Unicode nel compilatore e nel linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa sezione viene illustrato il supporto Unicode negli strumenti di compilazione di Visual C\+\+.  
  
 Nomi file  
 I nomi file specificati nella riga di comando o nelle direttive del compilatore \(ad esempio, \#include\) possono adesso contenere caratteri Unicode.  
  
 File di codice sorgente  
 I caratteri Unicode sono adesso supportati in identificatori, macro, stringhe, caratteri letterali e commenti.  Sono inoltre supportati i nomi di caratteri universali.  
  
 I caratteri Unicode possono essere immessi in un file di codice sorgente in base alle codifiche riportate di seguito:  
  
-   UTF\-16 little\-endian con o senza indicatore per l'ordine dei byte \(BOM, Byte Order Mark\)  
  
-   UTF\-16 big\-endian con o senza BOM  
  
-   UTF\-8 con BOM  
  
 Output  
 Durante la compilazione, il compilatore restituisce informazioni di diagnostica alla console in formato UTF\-16.  I caratteri che possono essere visualizzati sulla console dipendono dalle proprietà della finestra della console.  L'output del compilatore reindirizzato a un file si trova nella tabella codici della console ANSI corrente.  
  
 File di risposta e file def del linker  
 I file di risposta e i file def possono essere in formato UTF\-16 con l'indicatore per l'ordine dei byte oppure ANSI.  In precedenza era supportato solo il formato ANSI.  
  
 dump asm e cod  
 I dump asm e cod sono in formato ANSI per impostazione predefinita per la compatibilità con MASM.  Utilizzare l'opzione \/FAu per l'output in formato UTF\-8.  Si noti che se si specifica l'opzione \/FAs, verrà stampato direttamente il codice sorgente in formato misto, che potrebbe apparire alterato se, ad esempio, il codice sorgente è in formato UTF\-8 e non è stata specificata l'opzione \/FAsu.  
  
 È possibile attivare i nomi file Unicode nell'ambiente di sviluppo \(vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md)\) selezionando lo strumento appropriato e scegliendo la proprietà **Attiva file di risposta Unicode**, che è attivata per impostazione predefinita.  È possibile modificare questa impostazione predefinita se si modifica l'ambiente di sviluppo per utilizzare un compilatore che non dispone del supporto Unicode.  
  
## Vedere anche  
 [Compilazione dalla riga di comando](../../build/building-on-the-command-line.md)