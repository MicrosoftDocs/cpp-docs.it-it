---
title: "Impossibile trovare la libreria standard &#39;&lt;nomefile&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc40049"
  - "bc40049"
helpviewer_keywords: 
  - "BC40049"
ms.assetid: a292f97e-4852-4021-b300-7ab47beb95d9
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile trovare la libreria standard &#39;&lt;nomefile&gt;&#39;
[!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non riesce a trovare o ad aprire una delle librerie DLL standard necessarie per la compilazione e il collegamento.  
  
 La libreria inutilizzabile è più probabilmente mscorlib.dll o microsoft.visualbasic.dll.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40049  
  
### Per correggere l'errore  
  
1.  Verificare che il file citato nel messaggio di errore sia presente sul disco rigido da cui sta eseguendo [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]. In genere le librerie standard dovrebbero trovarsi nella sottodirectory \\WINNT\\Microsoft.NET\\Framework o \\WINDOWS\\Microsoft.NET\\Framework.  
  
2.  Verificare che né il file né la directory abbia un'impostazione o un attributo che impedisca l'accesso in lettura da [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
3.  Verificare che il nome e l'estensione del file siano stati digitati correttamente. L'uso delle maiuscole non è un problema.  
  
4.  Se il file sembra essere correttamente posizionato e accessibile, potrebbe essere danneggiato sul disco. Reinstallare [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] se possibile.  
  
5.  Annotare il nome e l'estensione esatti del file e contattare il Servizio supporto tecnico Microsoft.  
  
## Vedere anche  
 [Compilazione dalla riga di comando](../Topic/Building%20from%20the%20Command%20Line%20\(Visual%20Basic\).md)   
 [How to: Invoke the Command\-Line Compiler](../Topic/How%20to:%20Invoke%20the%20Command-Line%20Compiler%20\(Visual%20Basic\).md)   
 [Comunicazioni con Microsoft](../Topic/Talk%20to%20Us.md)