---
title: "Errore MSB3841 di MSBuild | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.ResolveSDKReference.InvalidDependencyInPlatform"
ms.assetid: 80ed22a1-bd62-4ace-892f-6b6009dff8e5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Errore MSB3841 di MSBuild
**MSB3841: l'SDK "{1}" dipende dall'SDK "{0}", che è incompatibile con progetti destinati alla versione piattaforma "{2}".**  
  
 MSBuild genera questo errore quando il progetto presenta una dipendenza che è incompatibile con la piattaforma di destinazione del progetto.  Basarsi su dipendenze incompatibili può causare errori o un comportamento imprevisto dell'app in fase di esecuzione  
  
### Per correggere questo errore per i riferimenti al progetto  
  
1.  I progetti Visual Basic, C\#, C\+\+ e JavaScript destinati a [!INCLUDE[win81](../misc/includes/win81_md.md)] Store non possono fare riferimento a progetti Windows Store in C\+\+ destinati a [!INCLUDE[win8](../build/includes/win8_md.md)] perché si verificheranno problemi di runtime.  Se qualsiasi progetto nell'app è destinato a [!INCLUDE[win81](../misc/includes/win81_md.md)] e l'app è costituita da un progetto Windows Store in C\+\+, sarà necessario eseguire i passaggi seguenti:  
  
2.  Ridestinare tutti i progetti nell'app a [!INCLUDE[win81](../misc/includes/win81_md.md)].  A questo scopo è possibile fare clic con il pulsante destro del mouse su ogni progetto nell'app, selezionare il comando **Ridestina a Windows 8.1** e fare clic su **OK** nella finestra di dialogo **Controlla modifiche a progetti e soluzioni**.  
  
3.  Fare clic con il pulsante destro del mouse su ogni progetto Visual Basic, C\# e JavaScript dipendente da un progetto Windows Store in C\+\+, scegliere **Aggiungi riferimento**, passare alla scheda **Windows**, quindi alla sottoscheda **Estensioni**, deselezionare **Microsoft Visual C\+\+ Runtime Package v11.0** e selezionare **Microsoft Visual C\+\+ Runtime Package v12.0**, quindi fare clic su **OK**.  
  
4.  I progetti Windows Store in Visual Basic, C\# e JavaScript destinati a [!INCLUDE[win81](../misc/includes/win81_md.md)] possono fare riferimento a progetti Windows Store in Visual Basic e C\# destinati a [!INCLUDE[win8](../build/includes/win8_md.md)] purché i progetti [!INCLUDE[win8](../build/includes/win8_md.md)] Store non usino API deprecate in [!INCLUDE[win81](../misc/includes/win81_md.md)].  Vedere [Conversione delle app di Windows 8 a Windows 8.1 Preview](http://msdn.microsoft.com/library/windows/apps/dn263113.aspx) per verificare se i progetti [!INCLUDE[win8](../build/includes/win8_md.md)] Store continueranno a comportarsi come previsto quando vi si fa riferimento da un progetto [!INCLUDE[win81](../misc/includes/win81_md.md)].  
  
     I progetti [!INCLUDE[win8](../build/includes/win8_md.md)] non possono dipendere da progetti Windows Store o da file binari destinati a [!INCLUDE[win81](../misc/includes/win81_md.md)].  
  
### Per correggere questo errore per i riferimenti a SDK di estensione  
  
1.  I progetti Windows Store Visual Basic, C\#, C\+\+ e JavaScript destinati a [!INCLUDE[win81](../misc/includes/win81_md.md)] non possono fare riferimento a SDK di estensione che dipendono da Microsoft Visual C\+\+ Runtime Package v11.0, perché si verificheranno problemi di runtime.  Per verificare se un SDK di estensione dipende da Microsoft Visual C\+\+ Runtime Package v11.0, creare un nuovo progetto Windows Store in C\#, fare clic con il pulsante destro del mouse e scegliere **Aggiungi riferimento**, passare alla scheda **Windows**, quindi alla sottoscheda **Estensioni**, selezionare l'SDK di estensione e controllare se nel riquadro destro di **Gestione riferimenti Microsoft.VCLibs, versione \= 11.0** è elencato come dipendenza.  
  
     I progetti Windows Store in Visual Basic, C\# e JavaScript destinati a [!INCLUDE[win81](../misc/includes/win81_md.md)] possono fare riferimento a SDK di estensione che non dipendono da Microsoft Visual C\+\+ Runtime Package v11.0, purché questi SDK di estensione non usino API deprecate in [!INCLUDE[win81](../misc/includes/win81_md.md)].  Controllare il sito del fornitore dell'SDK di estensione per verificare se i progetti Store destinati a [!INCLUDE[win81](../misc/includes/win81_md.md)] possono farvi riferimento.  
  
     Se si determina che l'SDK di estensione a cui fa riferimento l'app non è supportato, è necessario eseguire i passaggi seguenti:  
  
2.  Controllare il nome del progetto che causa l'errore.  La piattaforma di destinazione del progetto è inserita tra parentesi accanto al nome del progetto.  Ad esempio, **NomeProgettoPersonale \(Windows 8.1\)** significa che il progetto NomeProgettoPersonale è destinato alla versione della piattaforma [!INCLUDE[win81](../misc/includes/win81_md.md)].  
  
3.  Andare al sito del fornitore proprietario dell'SDK di estensione non supportato e installare la versione dell'SDK di estensione con dipendenze compatibili con la versione della piattaforma di destinazione del progetto.  
  
4.  Se l'SDK di estensione installato in precedenza ha dipendenze da altri SDK di estensione, andare ai siti dei fornitori proprietari delle dipendenze e installare le versioni di queste dipendenze compatibili con la versione della piattaforma di destinazione del progetto.  
  
    > [!NOTE]
    >  Se il progetto è destinato a [!INCLUDE[win81](../misc/includes/win81_md.md)] e l'SDK di estensione installato in precedenza ha una dipendenza da Microsoft Visual C\+\+ Runtime Package, la versione di Microsoft Visual C\+\+ Runtime Package compatibile con Windows 8.1 è v12.0 e viene installata con [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)].  
  
    > [!NOTE]
    >  Per verificare se l'SDK di estensione installato in precedenza ha dipendenze da altri SDK di estensione, riavviare Visual Studio, creare un nuovo progetto Windows Store in C\#, fare clic con il pulsante destro del mouse sul progetto e scegliere **Aggiungi riferimento**, passare alla scheda **Windows**, passare alla sottoscheda **Estensioni**, selezionare l'SDK di estensione e controllare nel riquadro destro di **Gestione riferimenti**.  Se dispone di dipendenze, risulteranno elencate.  
  
5.  Riavviare Visual Studio e aprire l'app.  
  
6.  Fare clic con il pulsante destro del mouse sul progetto che causa l'errore e scegliere **Aggiungi riferimento** per i progetti Visual Basic, C\# o JavaScript oppure **Riferimenti** per progetti C\+\+.  Per i progetti C\+\+, fare quindi clic sul pulsante Aggiungi nuovo riferimento.  
  
7.  Fare clic sulla scheda **Windows** e quindi sulla sottoscheda **Estensioni**.  Deselezionare le caselle di controllo accanto ai vecchi SDK di estensione e selezionare le caselle di controllo accanto ai nuovi SDK di estensione.  Fare clic su **OK**.