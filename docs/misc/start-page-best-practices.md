---
title: "Procedure consigliate per la pagina iniziale | Microsoft Docs"
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
  - "suggerimenti sulla pagina iniziale"
  - "procedure consigliate per la pagina iniziale"
  - "progettazione della pagina iniziale"
ms.assetid: f6ce1ce0-746e-4004-a37f-6f176f6f5851
caps.latest.revision: 16
caps.handback.revision: 16
manager: "douge"
---
# Procedure consigliate per la pagina iniziale
Poiché la pagina iniziale può accedere ai comandi di Visual Studio e viene aperta a ogni caricamento di Visual Studio, è consigliabile garantire la stabilità di qualsiasi pagina iniziale personalizzata prima di usarla o distribuirla. Questo argomento contiene le procedure consigliate per la progettazione di solide pagine iniziali e include le linee guida su come creare un'interfaccia utente utile.  
  
## Linee guida per la stabilità  
  
### Disponibilità delle risorse  
 L'aspetto più importante per la creazione di una solida pagina iniziale consiste nel garantire che siano disponibili tutte le risorse necessarie:  
  
-   Tutti i pacchetti necessari sono installati.  
  
-   I pacchetti sono precaricati.  
  
-   Tutti gli assembly necessari si trovano nella cartella \\PrivateAssemblies\\.  
  
-   Ogni componente che usa una connessione di rete o Internet ha percorsi alternativi per scenari offline e connessioni interrotte.  
  
### Prestazioni  
 Se la pagina iniziale ha requisiti di memoria elevata o carica molte risorse, considerare le conseguenze per le prestazioni di avvio. Programmare tali pagine iniziali in modo da caricare i componenti su richiesta, o in background se è più pratico, per evitare un aumento eccessivo dei tempi di avvio.  
  
### Processo di sviluppo  
 Se si modifica la pagina iniziale attiva direttamente, si rischia di introdurre inavvertitamente errori che causano l'arresto anomalo di Visual Studio. Poiché la pagina iniziale è visualizzata ogni volta che viene aperto Visual Studio, una pagina iniziale che si arresta in modo anomalo è difficile da correggere. Di conseguenza, è consigliabile modificare copie dei file della pagina iniziale per testarle in un'istanza sperimentale di Visual Studio ai fini dell'affidabilità. Quando la nuova pagina iniziale è stabile, è possibile impostarla perché venga eseguita nell'istanza primaria di Visual Studio.  
  
> [!NOTE]
>  È consigliabile testare anche qualsiasi pagina iniziale di terze parti in un'istanza sperimentale di Visual Studio prima di usarla nell'istanza primaria.  
  
##### Per testare una pagina iniziale in un'istanza sperimentale di Visual Studio  
  
1.  Se si usa il modello di progetto di pagina iniziale, premere F5. In caso contrario:  
  
    1.  Copiare il file XAML e qualsiasi testo o markup di supporto in \\%USERPROFILE%\\Documenti\\Visual Studio *\<versione\>*\\StartPages\\.  
  
    2.  Copiare tutti gli assembly necessari in *\<Percorso di installazione Visual Studio\>*\\Common7\\IDE\\PrivateAssemblies\\.  
  
    3.  Aprire un'istanza sperimentale di Visual Studio usando il comando seguente in un prompt dei comandi di Visual Studio.  
  
         **Devenv \/rootsuffix exp**  
  
2.  Scegliere **Opzioni** dal menu **Strumenti**. Selezionare **Ambiente** e quindi **Avvio**. Nell'elenco **Personalizza pagina iniziale** selezionare il file StartPage.xaml rinominato e quindi fare clic su **OK**.  
  
3.  Scegliere **Pagina iniziale** dal menu **Visualizza**.  
  
     Viene visualizzata la pagina iniziale. Se la pagina iniziale che si sta modificando si arresta in modo anomalo, è possibile riavviare l'istanza primaria di Visual Studio, apportare le correzioni necessarie e quindi aprire un'altra istanza sperimentale in modo da poter continuare a modificare la pagina iniziale.  
  
 Se la pagina iniziale arresta in modo anomalo l'istanza primaria di Visual Studio, è possibile disabilitare temporaneamente le pagine iniziali personalizzate impostando il valore della chiave HKEY\_CURRENT\_USER\\Software\\Microsoft\\VisualStudio\\14.0\\StartPage\\Default\\CustomizationEnabled del Registro di sistema su 0. In alternativa, è possibile rinominare temporaneamente il file XAML per la pagina iniziale predefinita corrente. Entrambe le scelte permetteranno di aprire Visual Studio per un tempo sufficiente a correggere l'errore.  
  
### Debug  
 La finestra degli strumenti della pagina iniziale intercetta le eccezioni quando la pagina iniziale viene caricata per la prima volta, ma non successivamente. È possibile indicare a Visual Studio di visualizzare tutte le eccezioni non gestite impostando il valore del Registro di sistema seguente su "1".  
  
 HKEY\_CURRENT\_USER\\Software\\Microsoft\\VisualStudio\\14.0\\General\\EnableUnhandledExceptionDisplay  
  
 Le informazioni sull'eccezione vengono visualizzate in una finestra di messaggio, permettendo il debug dei controlli in una pagina iniziale o in altre posizioni non gestite, anche nell'istanza primaria di Visual Studio. Se non si è in grado di eseguire il debug dopo la generazione dell'eccezione, è possibile riavviare Visual Studio con il comando "devenv \/safemode", tornare alla pagina iniziale precedente e quindi continuare il debug nell'istanza sperimentale.  
  
### Percorsi relativi  
 Quando si fa riferimento ai percorsi dei file da una pagina iniziale, usare sempre un percorso relativo per permettere configurazioni del sistema diverse. Tuttavia, la radice di tutti i percorsi relativi in una pagina iniziale non punta alla cartella \\StartPages\\, ma a ..\\*cartella di installazione di Visual Studio*\\Common7\\IDE, che è il percorso del file devenv.exe. Per impostare un percorso relativo alla cartella \\StartPages\\, usare il convertitore di percorsi relativi delle pagine iniziali di Visual Studio. A questo scopo, impostare la proprietà `Source` dell'oggetto su `vs:StartPageRelative`, come mostrato nell'esempio seguente.  
  
 XAML  
  
```  
<Image Source="{vs:StartPageRelative myImage.png}" .../>  
```  
  
 Usare la sintassi dei percorsi relativi standard quando si accede alla risorse incluse con Visual Studio o ai file inclusi in altri pacchetti.  
  
### Distribuzione  
 Quando si distribuisce una pagina iniziale personalizzata ad altri utenti, è consigliabile eseguire le procedure seguenti.  
  
#### Impostazioni utente  
  
-   Rispettare le impostazioni utente. Non sovrascrivere preferenze della pagina iniziale esistenti.  
  
#### VSIX  
 Queste procedure si applicano a una distribuzione VSIX:  
  
-   Usare l'elemento [GettingStartedGuide](http://msdn.microsoft.com/it-it/261bb1fd-abae-4ed6-80a8-90d5fc3bb8c6) nel manifesto VSIX per puntare alle istruzioni su come impostare la pagina iniziale predefinita.  
  
-   Usare gli elementi [Name](http://msdn.microsoft.com/it-it/d99d38d1-060b-401a-9b9f-ede2c6213a11) e [Description](http://msdn.microsoft.com/it-it/24ddc57e-e991-4a43-b0c9-0e76da293e99) del manifesto VSIX per identificare in modo chiaro l'estensione come pagina iniziale e descriverne lo scopo.  
  
-   Verificare che il manifesto VSIX non contenga percorsi assoluti.  
  
-   Quando si caricano elementi nel sito Web [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkID=123847), includere i tag pertinenti in modo che gli utenti possano identificare l'estensione come pagina iniziale.  
  
#### MSI  
 Se si produce una pagina iniziale come parte di un'estensione più grande distribuita in un pacchetto di Windows Installer \(MSI\), è possibile impostare la pagina iniziale perché venga installata come predefinita nel computer di destinazione. A questo scopo, scrivere il nome del file XAML della pagina iniziale nel valore URI della chiave del Registro di sistema: HKCU\\Software\\Microsoft\\VisualStudio\\14.0\\StartPage\\Default\\. Per impostare questo valore del Registro di sistema, usare le linee guida seguenti:  
  
-   Nel programma di installazione fornire l'interfaccia utente per permettere all'utente di indicare se impostare la nuova pagina iniziale come predefinita.  
  
-   Se l'utente disinstalla l'estensione, ripristinare il valore del Registro di sistema precedente.  
  
### Windows Presentation Framework \(WPF\)  
 Il markup XAML deve seguire le procedure consigliate per WPF. Per informazioni sulle procedure consigliate per [!INCLUDE[TLA#tla_winclient](../misc/includes/tlasharptla_winclient_md.md)] e [!INCLUDE[TLA#tla_netframewk](../misc/includes/tlasharptla_netframewk_md.md)] per lo sviluppo di applicazioni, vedere gli argomenti seguenti, in base alle esigenze.  
  
|Area|Argomento|  
|----------|---------------|  
|Accessibilità|[Accessibility Best Practices](../Topic/Accessibility%20Best%20Practices.md)|  
|Localizzazione|[Panoramica della globalizzazione e localizzazione WPF](../Topic/WPF%20Globalization%20and%20Localization%20Overview.md)|  
|Prestazioni|[Ottimizzazione delle prestazioni di applicazioni WPF](../Topic/Optimizing%20WPF%20Application%20Performance.md)|  
|Sicurezza|[Sicurezza \(WPF\)](../Topic/Security%20\(WPF\).md)|  
  
## Linee guida sull'interfaccia utente grafica  
 Per garantire un'esperienza utente pratica e intuitiva per la pagina iniziale, usare le linee guida sull'interfaccia utente seguenti, se applicabili.  
  
### Riga superiore  
  
#### Banner  
  
-   Impostare l'altezza dell'immagine del banner sullo stesso valore dell'altezza della definizione di riga della riga che lo contiene.  
  
-   Per poter supportare dimensioni della finestra e risoluzioni dello schermo diverse, fare in modo che l'immagine del banner sia visivamente gradevole a qualsiasi larghezza.  
  
-   Mantenere ordinata l'area del banner. Non sovrapporre al logo altri pulsanti o grafica.  
  
### Colonna sinistra  
  
#### Area dei pulsanti  
  
-   Inserire nell'area dei pulsanti solo i controlli usati più spesso, in modo da lasciare spazio per i nomi dei progetti recenti da visualizzare. È consigliabile aggiungere meno di cinque pulsanti.  
  
#### Progetti recenti  
  
-   Questo controllo permette all'utente di accedere ai progetti recenti. È possibile impostare il numero di progetti da visualizzare su un numero compreso tra 0 e 24. Poiché questa è la sezione della pagina iniziale usata più spesso, non è consigliabile rimuoverla.  
  
#### Opzioni della pagina iniziale  
  
-   Verificare che le opzioni **Chiudi pagina dopo caricamento del progetto** e **Mostra pagina all'avvio** siano visualizzate nella pagina iniziale.  
  
-   Per altri controlli in questa area, è consigliabile usare caselle di controllo o pulsanti di opzione e verificare che i controlli siano correlati alle preferenze della pagina iniziale.  
  
### Area di contenuto  
  
#### Schede di primo livello  
  
-   Il numero di schede aggiunte non deve essere tale da provocare la visualizzazione del controllo Struttura su più righe alle larghezze dello schermo più comuni.  
  
-   Usare nomi descrittivi brevi per le schede.  
  
-   Verificare che le schede rappresentino aree di contenuto raggruppate.  
  
#### Schede di sottolivello  
  
-   Usare lo spostamento di sottolivello solo in presenza di più di due argomenti correlati.  
  
-   Il numero di schede aggiunte non deve essere tale da provocare la visualizzazione del controllo Struttura su più righe alle larghezze dello schermo più comuni.  
  
-   Usare nomi descrittivi brevi per le schede.  
  
#### Contenuto delle schede di sottolivello  
  
-   Non mostrare più di cinque elementi di contenuto in una scheda di sottolivello.  
  
#### Elementi di contenuto  
  
-   Non mostrare più di quattro collegamenti per ogni elemento di contenuto.  
  
-   Se si associano immagini a elementi di contenuto, assicurarsi che ogni immagine sia di 175 per 125 pixel.  
  
-   Usare titoli descrittivi brevi per gli elementi di contenuto.  
  
-   Limitare le descrizioni degli elementi di contenuto a non più di due frasi.  
  
### Generale  
  
#### Animazioni  
  
-   Se si usano animazioni, limitarle a non più di 0,5 secondi per evitare che vengano riscontrate prestazioni insufficienti.  
  
#### Colori dell'ambiente  
  
-   Rispettare le impostazioni di sistema per tipi di carattere e colori.  
  
-   Usare sfondi di colore chiaro.  
  
-   Usare il rilevamento dei desktop remoti per garantire una gradevole riduzione del colore per le sessioni remote.  
  
## Vedere anche  
 [Architettura della pagina di iniziale](../misc/start-page-architecture.md)   
 [Distribuzione di pagine iniziali personalizzate](../Topic/Deploying%20Custom%20Start%20Pages.md)   
 [Aggiunta di comandi di Visual Studio a una pagina iniziale](../Topic/Adding%20Visual%20Studio%20Commands%20to%20a%20Start%20Page.md)