---
title: "Estensione delle finestre di dialogo modali | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "finestre di dialogo modali in estensioni di Visual Studio"
  - "estensioni di Visual Studio, finestre di dialogo modali"
ms.assetid: 478743dc-9fd9-46d7-9739-859fb8841a4f
caps.latest.revision: 11
caps.handback.revision: 11
manager: "douge"
---
# Estensione delle finestre di dialogo modali
Per garantire la compatibilità funzionale e visiva con Visual Studio, creare finestre di dialogo modali per estensioni di Visual Studio derivando finestre di dialogo dall'oggetto <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow?displayProperty=fullName>. Le finestre di dialogo derivate in questo modo possono offrire anche funzionalità aggiuntive. Ad esempio, è possibile impostare destinazioni F1 Guida e abilitare la riduzione a icona e l'ingrandimento nella finestra.  
  
## Creazione di finestre di dialogo modali  
  
1.  Nel progetto aggiungere un riferimento a System.XAML.  
  
2.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, scegliere **Aggiungi** e quindi fare clic su **Finestra**.  
  
3.  Assegnare un nome alla finestra e quindi fare clic su **Aggiungi**.  
  
     Nella finestra di progettazione verrà visualizzata una finestra XAML vuota.  
  
4.  Nell'elemento `Window` di primo livello aggiungere la dichiarazione di uno spazio dei nomi per <xref:Microsoft.VisualStudio.PlatformUI> e modificare l'elemento `Window` in elemento <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow?displayProperty=fullName>, come illustrato nell'esempio seguente.  
  
     [!code-xml[VSModalDialog#02](../misc/codesnippet/Xaml/extending-modal-dialog-boxes_1.xaml)]  
  
5.  Aggiungere pulsanti, etichette e altri controlli dalla **casella degli strumenti**, digitare le etichette di testo e regolare l'aspetto della finestra di dialogo.  
  
6.  Passare alla visualizzazione Codice.  
  
7.  Nella definizione della classe impostare la classe in modo che erediti da <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow>. Per impostazione predefinita, la classe eredita da <xref:System.Windows.Window?displayProperty=fullName>.  
  
8.  Aggiungere gestori eventi per i pulsanti e gli altri controlli.  
  
#### Per aggiungere la funzionalità F1 Guida a una finestra di dialogo modale  
  
1.  Nel costruttore aggiungere un parametro che accetta una stringa come argomento e impostare il costruttore in modo che erediti dal costruttore base usando lo stesso parametro, come illustrato nell'esempio seguente.  
  
     [!code-cs[VSModalDialog#12](../misc/codesnippet/CSharp/extending-modal-dialog-boxes_2.cs)]  
  
     Questo costruttore imposta la proprietà <xref:Microsoft.VisualStudio.PlatformUI.DialogWindowBase.HasHelpButton%2A> su `true` e permette l'uso della stringa ricevuta come parola chiave quando un utente preme F1 o fa clic sul pulsante **?**.  
  
#### Per aggiungere pulsanti Riduci a icona e Ingrandisci a una finestra di dialogo modale  
  
1.  Nella funzione del costruttore impostare le proprietà <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow.hasMinimizeButton%2A> e <xref:Microsoft.VisualStudio.PlatformUI.DialogWindow.hasHMaximizeButton%2A> su `true`, come mostrato nell'esempio seguente.  
  
     [!code-cs[VSModalDialog#13](../misc/codesnippet/CSharp/extending-modal-dialog-boxes_3.cs)]  
  
    > [!WARNING]
    >  Quando vengono visualizzati i pulsanti **Riduci a icona** e **Ingrandisci**, il pulsante **?** è nascosto, anche se la proprietà <xref:Microsoft.VisualStudio.PlatformUI.DialogWindowBase.HasHelpButton%2A> è impostata su `true`.  
  
## Esempio  
 L'esempio seguente mostra una finestra di dialogo modale con due costruttori. Il primo costruttore accetta una parola chiave F1 come argomento e visualizza un pulsante **?**. Il secondo costruttore non accetta argomenti, ma visualizza i pulsanti **Riduci a icona** e **Ingrandisci**. Quando si fa clic sul pulsante **Sì**, viene richiamata una seconda istanza della finestra di dialogo con la Guida abilitata.  
  
 [!code-xml[VSModalDialog#01](../misc/codesnippet/Xaml/extending-modal-dialog-boxes_4.xaml)]  
  
 [!code-cs[VSModalDialog#11](../misc/codesnippet/CSharp/extending-modal-dialog-boxes_5.cs)]  
  
 Il codice seguente richiama la finestra di dialogo da un gestore eventi.  
  
 [!code-cs[VSModalDialog#21](../misc/codesnippet/CSharp/extending-modal-dialog-boxes_6.cs)]  
  
## Vedere anche  
 [Creazione e gestione di finestre di dialogo modale](../Topic/Creating%20and%20Managing%20Modal%20Dialog%20Boxes.md)