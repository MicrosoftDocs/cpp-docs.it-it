---
title: "Utilizzo del Visualizzatore oggetti OLE/COM | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], visualizzazione di interfacce interne"
  - "Visualizzatore oggetti per oggetti di automazione"
  - "Visualizzatore oggetti OLE/COM"
ms.assetid: a3359e31-2869-451d-9571-129b4e8b41f0
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo del Visualizzatore oggetti OLE/COM
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare il visualizzatore oggetti OLE\/COM per visualizzare le interfacce di un controllo.  
  
### Per utilizzare il Visualizzatore oggetti OLE\/COM  
  
1.  Avviare il visualizzatore oggetti OLE\/COM \(oleview.exe\), situato \\ SDK \\ 8,0 \\ bin \\ x86 \\ programmi \(x86\) \\ windows.  
  
2.  Nella categoria di **Classi oggetto, raggruppate per componente** nel visualizzatore, aprire la cartella di **Oggetti automazione** per visualizzare gli oggetti ActiveX registrati.  
  
3.  Selezionare uno dei controlli.  Verranno visualizzate diverse schede nel riquadro destro; le interfacce implementate dal controllo verrà visualizzato nella scheda di **Registro di sistema**.  
  
    -   Se si apre il menu di scelta rapida per un controllo nel riquadro a sinistra e quindi scegliere **Visualizza informazioni di tipo**, in ITypeInfo viewer verrà visualizzato un file IDL o ODL ricostruito.  
  
    -   Se si espande il nodo del controllo nel riquadro sinistro, l'elenco delle interfacce dell'oggetto visualizzare.  Se si seleziona un'interfaccia, la relativa voce del Registro di sistema visualizzato nel riquadro di destra.  
  
    -   Se si apre il menu di scelta rapida per un'interfaccia quindi scegliere **Visualizza**, il visualizzatore oggetti OLE\/COM verrà aperta una finestra di dialogo contenente il GUID dell'interfaccia e un'opzione per visualizzare le informazioni della libreria dei tipi, se disponibili.  Selezionare **Visualizza informazioni di tipo** visualizzare una parte di un file IDL ricostruito specifico dell'interfaccia in ITypeInfo viewer verrà.  
  
    -   In ITypeInfo viewer verrà, è possibile selezionare un membro di interfaccia nella visualizzazione struttura ad albero per visualizzare le firme dei metodi di accesso nel riquadro di destra.  
  
## Vedere anche  
 [Utilizzo dei controlli ActiveX](../../data/ado-rdo/using-activex-controls.md)