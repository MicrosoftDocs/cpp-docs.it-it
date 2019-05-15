---
title: 'TN057: Localizzazione di componenti MFC'
ms.date: 06/28/2018
helpviewer_keywords:
- components [MFC], localizing
- TN057
- resources [MFC], localization
- localization [MFC], MFC resources
- localization [MFC], MFC components
- MFC DLLs [MFC], localizing
- DLLs [MFC], localizing MFC
- localization [MFC], resources
ms.assetid: 5376d329-bd45-41bd-97f5-3d895a9a0af5
ms.openlocfilehash: 552b925bae00e8bb171c543a6ed16e801186bf89
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65611921"
---
# <a name="tn057-localization-of-mfc-components"></a>TN057: Localizzazione di componenti MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive alcune delle progettazioni e procedure che utili per localizzare il componente, se si controlla un oggetto OLE o un'applicazione o una DLL che utilizza MFC.

## <a name="overview"></a>Panoramica

Esistono effettivamente due problemi da risolvere quando la localizzazione di un componente che utilizza MFC. In primo luogo, è necessario localizzare le proprie risorse, ovvero stringhe, le finestre di dialogo e altre risorse specifiche per il componente. La maggior parte dei componenti creati con MFC anche includono e usano un numero di risorse che sono definiti da MFC. È necessario fornire anche risorse MFC localizzate. Fortunatamente, diversi linguaggi sono già forniti dalla libreria MFC.

Inoltre, il componente dovrebbe prepararsi a eseguire nel proprio ambiente di destinazione (ambiente europea o abilitate per DBCS). Nella maggior parte, ciò dipende dall'applicazione considerando correttamente i caratteri con il set di bit elevato e gestione delle stringhe con caratteri a doppio byte. MFC è abilitata, per impostazione predefinita, per entrambi gli ambienti, in modo che sia possibile disporre di un unico file binario in tutto il mondo che viene usato in tutte le piattaforme con risorse diverse appena collegate al momento dell'installazione.

## <a name="localizing-your-components-resources"></a>Localizzazione delle risorse del componente

Localizzare l'applicazione o DLL deve comportare semplicemente sostituendo le risorse con le risorse che corrispondono alla lingua di destinazione. Per le proprie risorse, questa operazione è relativamente semplice: modificare le risorse nell'editor di risorse e compilare l'applicazione. Se il codice è scritto correttamente non esisterà alcun stringhe o testo che si vuole localizzare impostate come hardcoded nel codice sorgente C++ - tutti di localizzazione è possibile modificando semplicemente le risorse. In effetti, è possibile implementare il componente in modo che tutti che fornisce una versione localizzata non comporta anche una compilazione del codice originale. Questo è più complesso, ma è ampiamente compensato ed è il meccanismo scelto per la libreria MFC. È anche possibile localizzare un'applicazione per il caricamento del file EXE o DLL nell'editor di risorse e modificare direttamente le risorse. È possibile, ma richiede la riapplicazione di tali modifiche ogni volta che si compila una nuova versione dell'applicazione.

Un modo per evitare che è per individuare tutte le risorse in una DLL separata, detta anche una DLL satellite. Questa DLL verrà quindi ricaricata in modo dinamico in fase di esecuzione e le risorse vengono caricate da tale DLL anziché dal modulo principale con tutto il codice. MFC supporta direttamente questo approccio. Si consideri un'applicazione denominata MYAPP. FILE EXE; tutte le relative risorse che si trova in una DLL denominata MYRES può avere. DLL. Dell'applicazione `InitInstance` eseguirà il comando seguente per caricare la DLL e causare MFC caricare le risorse da tale posizione:

```cpp
CMyApp::InitInstance()
{
    // one of the first things in the init code
    HINSTANCE hInst = LoadLibrary("myres.dll");

    if (hInst != NULL)
        AfxSetResourceHandle(hInst);

    // other initialization code would follow
    // ...
}
```

Da questo momento, MFC caricherà le risorse da tale DLL anziché da myapp.exe. Tutte le risorse, tuttavia, devono essere presenti in tale DLL. MFC non cercherà l'istanza dell'applicazione alla ricerca di una determinata risorsa. Questa tecnica si applica ugualmente bene a regolare MFC (DLL), nonché di controlli OLE. Il programma di installazione Usa per copiare la versione appropriata di MYRES. DLL a seconda delle impostazioni locali quali risorse l'utente desidera.

È relativamente semplice creare una risorsa DLL di sole. Creare un progetto di DLL, aggiungere il. RC file a esso, quindi aggiungere le risorse necessarie. Se si dispone di un progetto esistente che non utilizza questa tecnica, è possibile copiare le risorse da tale progetto. Dopo aver aggiunto il file di risorse al progetto, si è quasi pronti per compilare il progetto. L'unica cosa è necessario eseguire è impostare opzioni per includere il linker **/NOENTRY**. Ciò indica al linker che la DLL non dispone di alcun punto di ingresso - poiché non dispone di alcun codice, non dispone di alcun punto di ingresso.

> [!NOTE]
> L'editor di risorse in Visual C++ 4.0 e versioni successive supporta più linguaggi per. File RC. Ciò può rendere molto facile da gestire la localizzazione in un singolo progetto. Le risorse per ogni lingua vengono controllate dalle direttive del preprocessore generate dall'editor di risorse.

## <a name="using-the-provided-mfc-localized-resources"></a>Utilizza il MFC fornita di risorse localizzate

Qualsiasi applicazione MFC che si compila riusa due cose da MFC: codice e risorse. Vale a dire, MFC include vari messaggi di errore, finestre di dialogo predefinite e altre risorse utilizzate dalle classi MFC. Per poter localizzare completamente l'applicazione, è necessario localizzare non solo le risorse dell'applicazione, ma anche le risorse che provengono direttamente da MFC. MFC fornisce un numero di lingua diversa i file di risorse automaticamente, in modo che se la lingua di destinazione è uno dei linguaggi di che MFC supporta già, è sufficiente Assicurarsi di che usare tali risorse localizzate.

Al momento della stesura di questo documento, MFC supporta cinese, tedesco, spagnolo, francese, italiano, giapponese e coreano. I file che contengono queste versioni localizzate si trovano nel MFC\INCLUDE\L.* ("L" è l'acronimo per localizzate) le directory. I file in lingua tedesca sono in MFC\INCLUDE\L.DEU, ad esempio. Affinché l'applicazione per usare questi file RC anziché i file che si trova in MFC\Include., aggiungere un `/IC:\PROGRAM FILES\MICROSOFT VISUAL STUDIO .NET 2003\VC7\MFC\INCLUDE\L.DEU` alla riga di comando RC (questo è solo un esempio; è necessario sostituire le impostazioni locali della scelta, nonché la directory in cui è stato installato Visual C ++).

Le istruzioni riportate sopra funzionerà se l'applicazione è collegato in modo statico con MFC. La maggior parte delle applicazioni collegano in modo dinamico (perché questo è l'impostazione predefinita la creazione guidata applicazione). In questo scenario, non solo il codice è in modo dinamico collegato - sono quindi le risorse. Di conseguenza, è possibile localizzare le risorse nell'applicazione, ma le risorse di implementazione MFC verranno ancora caricate dal MFC7x.DLL (o versione successiva) o da MFC7xLOC.DLL se esiste. È possibile scegliere questo da due diverse angolazioni.

L'approccio più complesso è ship uno del MFC7xLOC.DLLs localizzate (ad esempio MFC7xDEU, per il tedesco, MFC7xESP.DLL per spagnolo e così via) o versione successiva e installare il MFC7xLOC.DLL appropriati nella directory di sistema quando l'utente installa l'applicazione. Ciò può risultare molto complessa per gli sviluppatori e l'utente finale e di conseguenza non è consigliato. Visualizzare [56 Nota tecnica](../mfc/tn056-installation-of-localized-mfc-components.md) per altre informazioni su questa tecnica e dei relativi aspetti.

L'approccio più semplice e più sicura consiste nell'includere le risorse localizzate MFC nell'applicazione o DLL stessa (o la DLL satellite, se si usa uno). Ciò evita i problemi di installazione MFC7xLOC.DLL correttamente. A tale scopo, si seguono le stesse istruzioni per il case statico assegnato in precedenza (l'impostazione della riga di comando RC correttamente in modo da puntare alle risorse localizzate), ad eccezione che è necessario rimuovere anche il `/D_AFXDLL` definite dall'utente è stato aggiunto per la creazione guidata applicazione. Quando si `/D_AFXDLL` è definito, AFXRES. H (e altri file RC MFC) realtà non definisce tutte le risorse (in quanto essi verranno prelevati dalle DLL MFC invece).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
