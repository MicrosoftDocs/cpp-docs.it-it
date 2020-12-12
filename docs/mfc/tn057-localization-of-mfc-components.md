---
description: 'Altre informazioni su: TN057: localizzazione di componenti MFC'
title: 'TN057: localizzazione di componenti MFC'
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
ms.openlocfilehash: d4a331e74acd2b5b38ae059ea180a0a2148e3a0f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214806"
---
# <a name="tn057-localization-of-mfc-components"></a>TN057: localizzazione di componenti MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive alcune delle progettazioni e delle procedure che è possibile usare per localizzare il componente, se si tratta di un'applicazione o di un controllo OLE o di una DLL che Usa MFC.

## <a name="overview"></a>Panoramica

Esistono due problemi da risolvere quando si localizza un componente che Usa MFC. In primo luogo, è necessario localizzare le proprie risorse, ovvero stringhe, finestre di dialogo e altre risorse specifiche per il componente. La maggior parte dei componenti compilati utilizzando MFC include inoltre e utilizza una serie di risorse definite da MFC. È necessario fornire anche le risorse MFC localizzate. Fortunatamente, diverse lingue sono già fornite da MFC.

Inoltre, il componente deve essere preparato per l'esecuzione nell'ambiente di destinazione (ambiente abilitato per l'uso europeo o DBCS). Nella maggior parte dei casi, ciò dipende dall'applicazione che tratta i caratteri con il bit elevato impostato correttamente e gestendo le stringhe con caratteri a byte doppio. MFC è abilitato, per impostazione predefinita, per entrambi gli ambienti, in modo che sia possibile avere un unico file binario globale che viene usato in tutte le piattaforme con risorse solo diverse collegate al momento dell'installazione.

## <a name="localizing-your-components-resources"></a>Localizzazione delle risorse del componente

La localizzazione dell'applicazione o della DLL comporta la semplice sostituzione delle risorse con risorse corrispondenti alla lingua di destinazione. Per le risorse proprie, questo è relativamente semplice: modificare le risorse nell'editor risorse e compilare l'applicazione. Se il codice è scritto correttamente, non saranno presenti stringhe o testo da localizzare a livello di codice nel codice sorgente C++. è possibile eseguire tutte le operazioni di localizzazione semplicemente modificando le risorse. Infatti, è possibile implementare il componente in modo che tutti gli elementi che forniscono una versione localizzata non comportino una compilazione del codice originale. Si tratta di una soluzione più complessa, ma vale la pena ed è il meccanismo scelto per MFC. È anche possibile localizzare un'applicazione caricando il file EXE o DLL nell'editor risorse e modificando direttamente le risorse. Sebbene sia possibile, è necessario riapplicare le modifiche ogni volta che si compila una nuova versione dell'applicazione.

Un modo per evitare questo consiste nell'individuare tutte le risorse in una DLL separata, talvolta denominata DLL satellite. Questa DLL viene quindi caricata dinamicamente in fase di esecuzione e le risorse vengono caricate da tale DLL invece che dal modulo principale con tutto il codice. MFC supporta direttamente questo approccio. Si consideri un'applicazione denominata MYAPP.EXE; potrebbe avere tutte le risorse presenti in una DLL denominata MYRES.DLL. Nell'applicazione `InitInstance` verrà eseguito quanto segue per caricare la dll e fare in modo che MFC carichi le risorse da tale posizione:

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

Da quel punto in poi, MFC caricherà le risorse da tale DLL invece che da myapp.exe. Tutte le risorse, tuttavia, devono essere presenti in tale DLL. MFC non effettuerà la ricerca nell'istanza dell'applicazione in cerca di una risorsa specificata. Questa tecnica è valida anche per le normali DLL MFC e per i controlli OLE. Il programma di installazione copia la versione appropriata di MYRES.DLL a seconda delle impostazioni locali delle risorse che l'utente desidera.

La creazione di una DLL di sole risorse è relativamente semplice. Si crea un progetto di DLL, si aggiunge il. E aggiungere le risorse necessarie per il file RC. Se si dispone di un progetto esistente che non utilizza questa tecnica, è possibile copiare le risorse dal progetto. Dopo aver aggiunto il file di risorse al progetto, si è quasi pronti per compilare il progetto. L'unica cosa da fare è impostare le opzioni del linker in modo da includere **/NOENTRY**. Ciò indica al linker che la DLL non ha alcun punto di ingresso, poiché non contiene codice, non ha alcun punto di ingresso.

> [!NOTE]
> L'editor di risorse in Visual C++ 4,0 e versioni successive supporta più lingue per. File RC. Ciò consente di semplificare la gestione della localizzazione in un singolo progetto. Le risorse per ogni lingua sono controllate dalle direttive del preprocessore generate dall'editor risorse.

## <a name="using-the-provided-mfc-localized-resources"></a>Uso delle risorse localizzate MFC fornite

Qualsiasi applicazione MFC compilata riutilizza due elementi da MFC, ovvero codice e risorse. Ovvero MFC dispone di diversi messaggi di errore, finestre di dialogo predefinite e altre risorse utilizzate dalle classi MFC. Per localizzare completamente l'applicazione, è necessario localizzare non solo le risorse dell'applicazione, ma anche le risorse che provengono direttamente da MFC. MFC fornisce un numero di file di risorse di lingua differenti automaticamente, in modo che se la lingua di destinazione è una delle lingue supportate da MFC, è sufficiente assicurarsi di utilizzare tali risorse localizzate.

Al momento della stesura di questo documento, MFC supporta il cinese, il tedesco, lo spagnolo, il francese, l'italiano, il giapponese e il coreano. I file che contengono queste versioni localizzate si trovano in MFC\INCLUDE\L. * (il "L" sta per localizzare le directory). I file tedeschi si trovano in MFC\INCLUDE\L.DEU, ad esempio. Per fare in modo che l'applicazione usi questi file RC anziché i file presenti in MFC\INCLUDE, aggiungere un `/IC:\PROGRAM FILES\MICROSOFT VISUAL STUDIO .NET 2003\VC7\MFC\INCLUDE\L.DEU` alla riga di comando RC (questo è solo un esempio; è necessario sostituire le impostazioni locali e la directory in cui è stato installato Visual C++).

Le istruzioni sopra riportate funzionano se l'applicazione è collegata in modo statico a MFC. La maggior parte delle applicazioni si collega dinamicamente, perché è l'impostazione predefinita creazione guidata applicazioni. In questo scenario, non solo il codice è collegato dinamicamente, quindi sono le risorse. Di conseguenza, è possibile localizzare le risorse nell'applicazione, ma le risorse di implementazione MFC verranno comunque caricate dalla MFC7x.DLL (o versione successiva) o da MFC7xLOC.DLL se esiste. È possibile avvicinarsi a questo da due diversi angoli.

L'approccio più complesso consiste nel fornire uno dei MFC7xLOC.DLLlocalizzati, ad esempio MFC7xDEU, per il tedesco, MFC7xESP.DLL per lo spagnolo e così via, o una versione successiva, e installare il MFC7xLOC.DLL appropriato nella directory di sistema quando l'utente installa l'applicazione. Questa operazione può essere molto complessa sia per lo sviluppatore che per l'utente finale e pertanto non è consigliabile. Vedere la [Nota tecnica 56](../mfc/tn056-installation-of-localized-mfc-components.md) per ulteriori informazioni su questa tecnica e le relative avvertenze.

L'approccio più semplice e sicuro consiste nell'includere le risorse MFC localizzate nell'applicazione o nella DLL stessa (o nella relativa DLL satellite se ne viene utilizzata una). In questo modo si evitano i problemi di installazione MFC7xLOC.DLL correttamente. A tale scopo, seguire le stesse istruzioni per il caso statico specificato in precedenza, impostando la riga di comando RC in modo che punti alle risorse localizzate, ad eccezione del fatto che è necessario rimuovere anche la `/D_AFXDLL` definizione aggiunta da Creazione guidata applicazioni. Quando `/D_AFXDLL` è definito, Afxres. H (e gli altri file MFC RC) non definiscono effettivamente le risorse (poiché verranno invece estratte dalle DLL MFC).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
