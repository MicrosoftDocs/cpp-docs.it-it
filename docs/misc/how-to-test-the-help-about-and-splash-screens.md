---
title: "Procedura: Testare la pagina Informazioni su della Guida e le schermate iniziali | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Finestra di dialogo Informazioni"
  - "VSPackage, schermate iniziali"
  - "VSPackage, personalizzazione"
ms.assetid: 2b959fa4-56d3-44f4-8c2d-9ea2e6fb269d
caps.latest.revision: 10
caps.handback.revision: 10
manager: "douge"
---
# Procedura: Testare la pagina Informazioni su della Guida e le schermate iniziali
Dopo avere distribuito **La guida su** e il supporto della schermata iniziale, è possibile testare l'implementazione in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
### Per testare la guida sulla finestra di dialogo  
  
1.  Dal prompt dei comandi di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] , esecuzione devenv.exe tramite l'opzione di **\/setup** .  Nell'ambiente sperimentale, digitare:  
  
     **devenv \/rootsuffix Exp \/setup**  
  
     **Nota** è necessario ripetere questo passaggio solo quando si modificano le informazioni dello schermo di **La guida su** .  
  
2.  [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] eseguito nella stessa chiave radice del Registro di sistema è stato già accennato, ma senza l'opzione di **\/setup** :  
  
     **devenv \/rootsuffix Exp**  
  
3.  Scegliere dal menu di **Guida** , fare clic su **Informazioni su Microsoft Visual Studio**.  
  
     Il nome di un VSPackage viene visualizzato nell'elenco di **prodotti installati** .  
  
4.  Selezionare il package VS dall'elenco.  
  
     Le informazioni sul prodotto di un VSPackage vengono visualizzati nella casella di testo **Dettagli del prodotto** .  
  
### Per testare la schermata iniziale  
  
1.  Esecuzione devenv.exe tramite l'opzione di **\/setup** .  Nell'ambiente sperimentale, digitare:  
  
     **devenv \/rootsuffix Exp \/setup**  
  
     **Nota** è necessario ripetere questo passaggio solo quando si modificano le informazioni della schermata iniziale.  
  
2.  [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] eseguito nella stessa chiave radice del Registro di sistema è stato già accennato, ma con l'opzione di **\/splash** invece dell'opzione di **\/setup** .  
  
     **devenv \/rootsuffix Exp \/splash**  
  
     Le informazioni e il logo del prodotto di un VSPackage visualizzati nella schermata iniziale.  
  
## Vedere anche  
 [Personalizzazione di un pacchetto VSPackage](../misc/vspackage-branding.md)