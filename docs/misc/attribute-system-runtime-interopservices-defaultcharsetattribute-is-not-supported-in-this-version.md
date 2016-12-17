---
title: "L&#39;attributo &#39;System.Runtime.InteropServices.DefaultCharSetAttribute&#39; non &#232; supportato in questa versione | Microsoft Docs"
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
  - "bc32510"
  - "vbc32510"
helpviewer_keywords: 
  - "BC32510"
ms.assetid: e2eec233-6e0b-4f2f-a801-b0274e579c0e
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;attributo &#39;System.Runtime.InteropServices.DefaultCharSetAttribute&#39; non &#232; supportato in questa versione
L'attributo <xref:System.Runtime.InteropServices.DefaultCharSetAttribute?displayProperty=fullName> consente di specificare il set di caratteri da usare nelle stringhe sottoposte a marshalling. Il suo valore accetta un membro dell'enumerazione <xref:System.Runtime.InteropServices.CharSet?displayProperty=fullName>.  
  
 La versione corrente di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non supporta questo attributo. È possibile che venga supportato nelle versioni future.  
  
 **ID errore:** BC32510  
  
### Per correggere l'errore  
  
-   Usare ogni [Declare Statement](../Topic/Declare%20Statement.md) per specificare il set di caratteri per la routine esterna che dichiara. Questa condizione è illustrata nell'esempio seguente.  
  
    ```  
    Ansi Declare Function GetUserName Lib "advapi32.dll" _ (ByVal lpBuffer As String, ByRef nSize As Integer) As Integer Unicode Declare Sub externalProc Lib "projectlib.dll" _ (ByVal arg As Double)  
    ```  
  
     Se non si specifica il set di caratteri nell'istruzione `Declare`, viene usato il set ANSI predefinito.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DefaultCharSetAttribute>   
 <xref:System.Runtime.InteropServices.CharSet>   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [Declare Statement](../Topic/Declare%20Statement.md)