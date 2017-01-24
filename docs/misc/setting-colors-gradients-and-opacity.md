---
title: "Impostazione di colori, sfumature e opacit&#224; | Microsoft Docs"
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
  - "progettazione di elementi dell'interfaccia utente [Visual Studio SDK]"
ms.assetid: 1734bdc7-5e16-46c7-8507-eef5cea75cb9
caps.latest.revision: 31
caps.handback.revision: 31
manager: "douge"
---
# Impostazione di colori, sfumature e opacit&#224;
Tutti gli elementi dell'interfaccia utente in Visual Studio vengono creati in Windows Presentation Foundation \(WPF\). Quando si creano finestre degli strumenti o altri elementi dell'interfaccia utente, è quindi possibile applicare colori, sfumature e opacità impostando gli attributi appropriati in tali elementi. È possibile impostare valori specifici tramite la finestra **Proprietà** oppure è possibile eseguire una query sull'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) per ottenere i valori di sistema. È consigliabile usare i valori di sistema quando si vuole che le estensioni siano simili al resto dell'IDE.  
  
 L'interfaccia utente di Windows Form e l'interfaccia utente del codice nativo sono ancora supportate per compatibilità con le versioni precedenti. Per informazioni su come impostare colori e sfumature in estensioni non WPF, vedere la documentazione di [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)].  
  
## Impostazione di colori, sfumature e opacità  
 È possibile modificare l'aspetto della maggior parte degli elementi XAML impostando i relativi attributi `Background`, `Foreground` e `Opacity` o altri attributi visivi. Questi attributi corrispondono alle proprietà che accettano <xref:System.Windows.Media.Brush?displayProperty=fullName> come valore.  
  
#### Per impostare colori di sfondo, sfumature e opacità in una finestra degli strumenti  
  
1.  Aprire MyControl.xaml.  
  
2.  Nel riquadro **XAML**, nell'elemento <xref:System.Windows.Controls.UserControl> di primo livello, digitare `background=`.  
  
     IntelliSense visualizza un elenco di colori per l'attributo BackGround.  
  
     Selezionare un colore nell'elenco.  
  
3.  Nella finestra **Proprietà** espandere il nodo **Pennelli** e quindi fare clic su **Sfondo**.  
  
     La finestra **Proprietà** visualizzerà una selezione colori. Sopra la selezione colori è presente una riga di icone che rappresentano i pennelli.  
  
4.  Usare i dispositivi di scorrimento per selezionare un colore.  
  
     Il codice XAML viene immediatamente aggiornato per visualizzare il nuovo colore di sfondo.  
  
5.  Fare clic sull'icona Pennello sfumatura.  
  
     La selezione colori cambia in un selezione sfumature.  
  
6.  Usare i dispositivi di scorrimento per selezionare una sfumatura.  
  
     Il codice XAML viene immediatamente aggiornato per visualizzare la nuova sfumatura di sfondo.  
  
7.  Fare clic sull'icona Pennello immagine.  
  
     La selezione sfumature cambia in uno strumento di selezione di immagini.  
  
8.  Selezionare un'immagine e impostare i parametri relativi ad adattamento e affiancamento.  
  
     Il codice XAML viene immediatamente aggiornato per visualizzare la nuova immagine di sfondo.  
  
9. Fare clic sull'icona Pennello Null.  
  
     Lo sfondo nella finestra di progettazione torna neutro e l'attributo `BackGround` viene impostato su `"{x:Null}"`.  
  
## Query dei valori di sistema  
 È possibile eseguire una query dei valori di sistema usando le proprietà della classe <xref:Microsoft.VisualStudio.Shell.VsBrushes?displayProperty=fullName>, che fanno riferimento a pennelli impostati in altre parti di Visual Studio.  
  
#### Per impostare colori, sfumature e opacità eseguendo una query dei valori di sistema  
  
1.  Selezionare un elemento XAML.  
  
2.  Nella definizione dell'elemento impostare uno degli attributi visivi dell'elemento su una proprietà della classe `VsBrushes`, come illustrato nell'esempio seguente.  
  
     [!code-xml[TWShortcutMenu#32](../misc/codesnippet/Xaml/setting-colors-gradients-and-opacity_1.xaml)]  
  
     L'uso dell'estensione [DynamicResource](../Topic/DynamicResource%20Markup%20Extension.md) consente la modifica del valore come necessario, ad esempio quando un utente modifica le impostazioni. È necessario usare l'estensione [X:Static](../Topic/x:Static%20Markup%20Extension.md) perché la classe `VsBrushes` non fa parte dello spazio dei nomi WPF predefinito.  
  
## Vedere anche  
 [Estensione delle finestre degli strumenti](../misc/extending-tool-windows.md)