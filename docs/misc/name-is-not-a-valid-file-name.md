---
title: "&lt;name&gt; is not a valid file name. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VS_E_INVALIDFILENAME"
  - "VS.Message.0x00006A72"
ms.assetid: c5969671-3b64-4854-acb6-328e8a30863f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# &lt;name&gt; is not a valid file name.
Questo errore viene generato quando si tenta di creare un nuovo file nella finestra di comando ma il nome file contiene caratteri non supportati.  
  
 I nomi dei file non devono contenere i seguenti caratteri:  
  
-   segno di cancelletto \(\#\)  
  
-   simbolo di percentuale \(%\)  
  
-   e commerciale \(&\)  
  
-   asterisco \(\*\)  
  
-   barra verticale \(&#124;\)  
  
-   barra rovesciata \(\\\)  
  
-   due punti \(:\)  
  
-   virgolette doppie \("\)  
  
-   minore di \(\<\)  
  
-   maggiore di \(\>\)  
  
-   punto \(.\)  
  
-   punto interrogativo \(?\)  
  
-   barra \(\/\)  
  
-   spazi iniziali o finali \(' '\)  
  
-   nomi riservati per Windows o DOS  \(nul, aux, con, com1, lpt1 e così via\)  
  
### Per correggere l'errore  
  
-   Immettere il comando con un altro nome file in cui non siano inclusi i caratteri sopra elencati.  
  
## Vedere anche  
 [Comando Nuovo file](../Topic/New%20File%20Command.md)   
 [Comandi di Visual Studio](../Topic/Visual%20Studio%20Commands.md)