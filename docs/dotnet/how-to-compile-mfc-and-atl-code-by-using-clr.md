---
title: 'Procedura: compilare codice MFC e ATL tramite - clr | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], interoperability
- ATL [C++], interoperability
- mixed assemblies [C++], MFC code
- mixed assemblies [C++], ATL code
- /clr compiler option [C++], compiling ATL and MFC code
- interoperability [C++], /clr compiler option
- regular MFC DLLs [C++], /clr compiler option
- interop [C++], /clr compiler option
- extension DLLs [C++], /clr compiler option
ms.assetid: 12464bec-33a4-482c-880a-c078de7f6ea5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8c6079cd0371afa1b9a3ed32ba2cf67e1691d665
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382804"
---
# <a name="how-to-compile-mfc-and-atl-code-by-using-clr"></a>Procedura: compilare codice MFC e ATL tramite /clr

In questo argomento viene illustrato come compilare programmi esistenti di MFC e ATL per Common Language Runtime.

### <a name="to-compile-an-mfc-executable-or-regular-mfc-dll-by-using-clr"></a>Per compilare una DLL MFC regolare o eseguibili MFC con /clr

1. Fare clic sul progetto in **Esplora soluzioni** e quindi fare clic su **proprietà**.

1. Nel **proprietà progetto** finestra di dialogo espandere il nodo accanto a **le proprietà di configurazione** e selezionare **generale**. Nel riquadro di destra, sotto **impostazioni predefinite progetto**, impostare **supporto Common Language Runtime** al **supporto Common Language Runtime (/ Common Language Runtime)**.

     Nel riquadro stesso, assicurarsi che **uso di MFC** è impostata su **Usa MFC in una DLL condivisa**.

1. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Verificare che l'opzione **formato informazioni di Debug** è impostata su **/Zi Database di programma** (non **/ZI**).

1. Selezionare il **generazione di codice** nodo. Impostare **Abilita ricompilazione minima** al **No (/ /GM-)**. Impostare anche **controlli Runtime di base** al **predefinito**.

1. Sotto **le proprietà di configurazione**, selezionare **C/C++** e quindi **generazione di codice**. Verificare che l'opzione **libreria di Runtime** sia impostata su **DLL di Debug multithread (/ /MDd)** oppure **DLL multithread (/ MD)**.

1. In stdafx. h, aggiungere la riga seguente.

    ```
    #using <System.Windows.Forms.dll>
    ```

### <a name="to-compile-an-mfc-extension-dll-by-using-clr"></a>Per compilare una DLL di estensione MFC con /clr

1. Seguire la procedura descritta in "To compilare una DLL MFC regolare o eseguibili MFC con /clr".

1. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **intestazioni precompilate**. Impostare **Crea/Usa intestazione precompilata** al **non Usa intestazioni precompilate**.

     In alternativa, nella **Esplora soluzioni**, fare doppio clic su stdafx. cpp e quindi fare clic su **proprietà**. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Impostare **esegue la compilazione con supporto Common Language Runtime** al **supporto Common Language Runtime No**.

1. Per il file che contiene DllMain e qualsiasi chiama, in **Esplora soluzioni**, fare doppio clic su file e quindi fare clic su **proprietà**. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Nel riquadro di destra, sotto **impostazioni predefinite progetto**, impostare **esegue la compilazione con supporto Common Language Runtime** al **supporto Common Language Runtime No**.

### <a name="to-compile-an-atl-executable-by-using-clr"></a>Per compilare un file eseguibile ATL tramite /clr

1. Nelle **Esplora soluzioni**, fare clic sul progetto e quindi fare clic su **proprietà**.

1. Nel **proprietà progetto** finestra di dialogo espandere il nodo accanto a **le proprietà di configurazione** e selezionare **generale**. Nel riquadro di destra, sotto **impostazioni predefinite progetto**, impostare **supporto Common Language Runtime** al **supporto Common Language Runtime (/ Common Language Runtime)**.

1. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Verificare che l'opzione **formato informazioni di Debug** è impostata su **/Zi Database di programma** (non **/ZI**).

1. Selezionare il **generazione di codice** nodo. Impostare **Abilita ricompilazione minima** al **No (/ /GM-)**. Impostare anche **controlli Runtime di base** al **predefinito**.

1. Sotto **le proprietà di configurazione**, selezionare **C/C++** e quindi **generazione di codice**. Verificare che l'opzione **libreria di Runtime** sia impostata su **DLL di Debug multithread (/ /MDd)** oppure **DLL multithread (/ MD)**.

1. Per ogni file generati da MIDL (file C), fare doppio clic su file in **Esplora soluzioni** e quindi fare clic su **proprietà**. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Impostare **esegue la compilazione con supporto Common Language Runtime** al **supporto Common Language Runtime No**.

### <a name="to-compile-an-atl-dll-by-using-clr"></a>Per compilare una DLL ATL tramite /clr

1. Seguire i passaggi nella sezione "per compilare un eseguibile ATL tramite /clr".

1. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **intestazioni precompilate**. Impostare **Crea/Usa intestazione precompilata** al **non Usa intestazioni precompilate**.

     In alternativa, nella **Esplora soluzioni**, fare doppio clic su stdafx. cpp e quindi fare clic su **proprietà**. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Impostare **esegue la compilazione con supporto Common Language Runtime** al **supporto Common Language Runtime No**.

1. Per il file che contiene DllMain e qualsiasi chiama, in **Esplora soluzioni**, fare doppio clic su file e quindi fare clic su **proprietà**. Sotto **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generali**. Nel riquadro di destra, sotto **impostazioni predefinite progetto**, impostare **esegue la compilazione con supporto Common Language Runtime** al **supporto Common Language Runtime No**.

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)