---
title: 'TN057: Localizzazione di componenti MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.components
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 935f85f55db8ed0d01bce309aa598100002c0f4d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33384514"
---
# <a name="tn057-localization-of-mfc-components"></a>TN057: localizzazione di componenti MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive alcune delle progettazioni e procedure che utili per localizzare il componente, se il controllo OLE o un'applicazione o una DLL che utilizza MFC.  
  
## <a name="overview"></a>Panoramica  
 Sono disponibili due problemi da risolvere quando la localizzazione di un componente che utilizza MFC. In primo luogo, è necessario localizzare le risorse, ovvero stringhe, le finestre di dialogo e altre risorse che sono specifici per il componente. La maggior parte dei componenti compilati utilizzando MFC anche includono e utilizzano un numero di risorse che sono definiti da MFC. È necessario fornire anche risorse MFC localizzate. Fortunatamente, diversi linguaggi sono già forniti da MFC.  
  
 Inoltre, il componente deve essere preparato per l'esecuzione nel proprio ambiente di destinazione (European o abilitati per DBCS environment). La maggior parte, ciò dipende l'applicazione considerarli correttamente i caratteri con il set di bit significativo e la gestione delle stringhe con caratteri a doppio byte. MFC è abilitata, per impostazione predefinita, per entrambi gli ambienti, in modo che sia possibile disporre di un singolo binario in tutto il mondo che viene utilizzato in tutte le piattaforme con solo diverse risorse collegate in fase di installazione.  
  
## <a name="localizing-your-components-resources"></a>Localizzazione delle risorse del componente  
 Localizzazione dell'applicazione o DLL è consigliabile coinvolgere semplicemente sostituendo le risorse con le risorse che corrispondono alla lingua di destinazione. Per le risorse, è relativamente semplice: modificare le risorse nell'editor di risorse e compilare l'applicazione. Se il codice è scritto correttamente non esisterà alcun stringhe o testo che si desidera localizzare hardcoded nel codice sorgente C++, è possibile eseguire tutti localizzazione modificando semplicemente le risorse. In effetti, è possibile implementare il componente in modo che tutti che fornisce una versione localizzata non comporta anche una compilazione del codice originale. Questo è più complesso, ma è accettabile e il metodo scelto per la libreria MFC. È anche possibile localizzare l'applicazione caricando il file EXE o DLL nell'editor di risorse e modificare direttamente le risorse. Anche se possibili, richiede la riapplicazione di tali modifiche ogni volta che si compila una nuova versione dell'applicazione.  
  
 Un modo per evitare che è per individuare tutte le risorse in una DLL separata, detta anche una DLL satellite. Quindi la DLL viene caricata dinamicamente in fase di esecuzione e le risorse vengono caricate dalla DLL anziché dal modulo principale con tutto il codice. MFC supporta direttamente questo approccio. Si consideri un'applicazione denominata MYAPP. EXE; tutte le risorse a cui che si trova in una DLL denominata MYRES può avere. DLL. L'applicazione `InitInstance` eseguirebbe il comando seguente per caricare la DLL e causare MFC caricare le risorse da tale posizione:  
  
```  
CMyApp::InitInstance()  
{ *// one of the first things in the init code  
    HINSTANCE hInst = LoadLibrary("myres.dll");

    if (hInst != NULL)  
    AfxSetResourceHandle(hInst);

 *// other initialization code would follow  
 .  
 .  
 .  
}  
```  
  
 In poi, MFC caricherà risorse da questa DLL anziché da myapp.exe. Tutte le risorse, tuttavia, devono essere presenti in tale DLL. MFC non cercherà l'istanza dell'applicazione cerca di una determinata risorsa. Questa tecnica si applica ugualmente anche regolare MFC (DLL), nonché di controlli OLE. Il programma di installazione copia la versione appropriata di MYRES. A seconda delle impostazioni locali quali risorse DLL sarebbe l'utente.  
  
 È relativamente semplice creare una risorsa solo DLL. Creare un progetto di DLL, aggiungere il. RC di file ad esso e aggiungere le risorse necessarie. Se si dispone di un progetto esistente che non utilizza questa tecnica, è possibile copiare le risorse del progetto. Dopo aver aggiunto il file di risorse al progetto, si è quasi pronti per compilare il progetto. L'unica cosa da eseguire è opzioni al linker di includere **/NOENTRY**. Ciò indica al linker che la DLL non dispone di alcun punto di ingresso - poiché non dispone di alcun codice, non dispone di alcun punto di ingresso.  
  
> [!NOTE]
>  L'editor di risorse in Visual C++ 4.0 e versioni successive supporta più lingue per. File RC. Ciò può rendere molto semplice gestire la localizzazione in un singolo progetto. Le risorse per ogni lingua vengono controllate dalle direttive del preprocessore generate dall'editor di risorse.  
  
## <a name="using-the-provided-mfc-localized-resources"></a>Utilizzando MFC fornito risorse localizzate  
 Qualsiasi applicazione MFC che compili riutilizza due cose da MFC: codice e risorse. Vale a dire, MFC include vari messaggi di errore, finestre di dialogo predefinite e altre risorse che vengono utilizzate dalle classi MFC. Per poter localizzare completamente l'applicazione, devi localizzare non solo le risorse dell'applicazione, ma anche le risorse provenienti direttamente da MFC. MFC fornisce una serie di lingua diversa i file di risorse automaticamente, in modo che se la lingua di destinazione è uno dei linguaggi di che MFC supporta già, è sufficiente Assicurarsi di utilizzare tali risorse localizzate.  
  
 Redazione del presente documento, MFC supporta cinese, tedesco, spagnolo, francese, italiano, giapponese e coreano. I file che contengono queste versioni localizzate presenti il MFC\INCLUDE\L.* ("L" sta per localizzate) directory. I file tedeschi presenti MFC\INCLUDE\L.DEU, ad esempio. Per impostare l'applicazione per utilizzare questi file RC anziché i file che si trovano in MFC\Include., aggiungere un `/IC:\PROGRAM FILES\MICROSOFT VISUAL STUDIO .NET 2003\VC7\MFC\INCLUDE\L.DEU` per la riga di comando RC (questo è solo un esempio, è necessario sostituire le impostazioni locali di scelta, nonché la directory in cui è installato Visual C# ++).  
  
 Le istruzioni riportate sopra funzionerà se l'applicazione collegata in modo statico con MFC. La maggior parte delle applicazioni collegano in modo dinamico (perché questo è l'impostazione predefinita la creazione guidata applicazione). In questo scenario, non solo il codice è in modo dinamico collegato - sono pertanto le risorse. Di conseguenza, è possibile localizzare le risorse dell'applicazione, ma le risorse di implementazione MFC verranno caricate dal MFC7x.DLL (o versione successiva) o da MFC7xLOC.DLL se esiste. È possibile eseguire questo da due diverse angolazioni.  
  
 L'approccio più complesso è ship tra il MFC7xLOC.DLLs localizzate (ad esempio MFC7xDEU, per il tedesco, MFC7xESP.DLL per lo spagnolo e così via) o una versione più recente e installare il MFC7xLOC.DLL appropriato nella directory di sistema quando l'utente installa l'applicazione. Questo può essere molto complesso per lo sviluppatore e l'utente finale e di conseguenza non è consigliato. Vedere [56 Nota tecnica](../mfc/tn056-installation-of-localized-mfc-components.md) per ulteriori informazioni su questa tecnica e dei relativi aspetti.  
  
 L'approccio più semplice e più sicura consiste nell'includere le risorse localizzate di MFC nell'applicazione o DLL stessa (o la DLL satellite, se si usa uno). Questo evita i problemi di installazione MFC7xLOC.DLL correttamente. A tale scopo, si seguono le stesse istruzioni per il case statico specificato in precedenza (l'impostazione della riga di comando RC correttamente in modo da puntare alle risorse localizzate), ad eccezione che è necessario rimuovere anche il `/D_AFXDLL` definite dall'utente è stato aggiunto per la creazione guidata applicazione. Quando `/D_AFXDLL` è definito, AFXRES. H (e altri file RC MFC) realtà non definisce tutte le risorse (in quanto essi verrà effettuato il pull da DLL MFC invece).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

