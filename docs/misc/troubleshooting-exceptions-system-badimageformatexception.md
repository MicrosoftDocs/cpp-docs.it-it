---
title: "Risoluzione dei problemi relativi alle eccezioni: System.BadImageFormatException | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "BadImageFormatException (classe)"
ms.assetid: 8d2b385a-3d6d-4dfa-8546-7ece562867e3
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.BadImageFormatException
Un'eccezione <xref:System.BadImageFormatException> viene generata quando l'immagine del file di una DLL o un programma eseguibile non è valida.  
  
## Suggerimenti associati  
 **Se l'applicazione utilizza componenti a 32 bit, assicurarsi che venga sempre eseguita come applicazione a 32 bit.**  
 Se la proprietà **Platform target** per il progetto dell'applicazione è impostata su `AnyCPU`, l'applicazione compilata può essere eseguita nella modalità a 64 bit o a 32 bit. Quando viene eseguita come applicazione a 64 bit, il compilatore JIT \(just\-in\-time\) genera codice nativo a 64 bit. Se l'applicazione dipende da un componente gestito o non gestito a 32 bit, tale componente non verrà caricato in modalità a 64 bit. Per risolvere il problema, impostare la proprietà **Platform target** del progetto su `x86` e ricompilare.  
  
 **Assicurarsi di non utilizzare un componente creato con una versione diversa di .NET Framework.**  
 Questa eccezione viene generata quando un'applicazione o un componente sviluppato con [!INCLUDE[net_v10_short](../misc/includes/net_v10_short_md.md)] o [!INCLUDE[net_v11_short](../misc/includes/net_v11_short_md.md)] tenta di caricare un assembly sviluppato con [!INCLUDE[net_v20SP1_short](../misc/includes/net_v20sp1_short_md.md)] o versioni successive o quando un'applicazione sviluppata con [!INCLUDE[net_v20SP1_short](../misc/includes/net_v20sp1_short_md.md)] o [!INCLUDE[net_v35_short](../misc/includes/net_v35_short_md.md)] tenta di caricare un assembly sviluppato con [!INCLUDE[net_v40_short](../misc/includes/net_v40_short_md.md)]. L'eccezione <xref:System.BadImageFormatException> può essere segnalata come errore in fase di compilazione oppure è possibile che l'eccezione venga generata in fase di esecuzione. Per un esempio, vedere la classe <xref:System.BadImageFormatException>.  
  
 **Assicurarsi che l'immagine del file sia un assembly o un modulo gestito valido.**  
 Questa eccezione viene generata quando una DLL o un eseguibile non gestito viene passato al metodo <xref:System.Reflection.Assembly.Load%2A> per il caricamento.  
  
 Per altre informazioni, gli utenti di Visual Basic possono vedere [Troubleshooting Interoperability](../Topic/Troubleshooting%20Interoperability%20\(Visual%20Basic\).md).  
  
## Note  
 Questa eccezione può essere generata dalla reflection su file eseguibili C\+\+. Nella maggior parte dei casi la causa è la rimozione da parte del compilatore C\+\+ degli indirizzi di rilocazione oppure della sezione .Reloc nel file eseguibile. Per mantenere l'indirizzo di rilocazione in un file eseguibile C\+\+, specificare **\/fixed:no** durante il collegamento.  
  
 Per altre cause di questa eccezione, vedere la descrizione della classe <xref:System.BadImageFormatException>.  
  
## Vedere anche  
 <xref:System.BadImageFormatException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)