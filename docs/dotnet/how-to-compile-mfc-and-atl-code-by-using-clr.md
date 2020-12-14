---
description: 'Ulteriori informazioni su: procedura: compilare codice MFC e ATL utilizzando/CLR'
title: 'Procedura: compilare codice MFC e ATL tramite-CLR'
ms.custom: get-started-article
ms.date: 11/04/2016
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
ms.openlocfilehash: 67a861dac3b4c4b454f4fbde4a500c3677ce0e25
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97304493"
---
# <a name="how-to-compile-mfc-and-atl-code-by-using-clr"></a>Procedura: compilare codice MFC e ATL tramite /clr

In questo argomento viene illustrato come compilare programmi MFC e ATL esistenti per la destinazione di Common Language Runtime.

### <a name="to-compile-an-mfc-executable-or-regular-mfc-dll-by-using-clr"></a>Per compilare un eseguibile MFC o una DLL MFC normale utilizzando/CLR

1. Fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** , quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **Proprietà progetto** espandere il nodo accanto a **proprietà di configurazione** e selezionare **generale**. Nel riquadro destro, in **impostazioni predefinite progetto**, impostare **supporto Common Language Runtime** su **supporto Common Language Runtime (/CLR)**.

   Nello stesso riquadro, assicurarsi che l' **uso di MFC** sia impostato in modo da **usare MFC in una DLL condivisa**.

1. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Verificare che il **formato delle informazioni di debug** sia impostato su **database di programma/Zi** (non **/Zi**).

1. Selezionare il nodo **generazione codice** . Impostare **Abilita ricompilazione minima** su **No (/GM-)**. Impostare anche i **controlli di runtime di base** sul **valore predefinito**.

1. In **proprietà di configurazione** selezionare **C/C++** e quindi **generazione codice**. Assicurarsi che la **libreria di runtime** sia impostata su una **dll di debug multithread (/MDD)** o su **DLL multithread (/MD)**.

1. In stdafx. h aggiungere la riga seguente.

    ```
    #using <System.Windows.Forms.dll>
    ```

### <a name="to-compile-an-mfc-extension-dll-by-using-clr"></a>Per compilare una DLL di estensione MFC utilizzando/CLR

1. Attenersi alla procedura descritta in "per compilare un file eseguibile MFC o una DLL MFC normale utilizzando/CLR".

1. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **intestazioni precompilate**. Impostare **Crea/Usa intestazione precompilata** su **non usando intestazioni precompilate**.

   In alternativa, in **Esplora soluzioni** fare clic con il pulsante destro del mouse su stdafx. cpp, quindi scegliere **Proprietà**. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Impostare **Compila con supporto Common Language Runtime** su **Nessun supporto Common Language Runtime**.

1. Per il file che contiene DllMain e qualsiasi elemento chiamato, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni**, quindi scegliere **Proprietà**. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Nel riquadro destro, in **impostazioni predefinite progetto**, impostare **Compila con supporto Common Language Runtime** su **Nessun supporto Common Language Runtime**.

### <a name="to-compile-an-atl-executable-by-using-clr"></a>Per compilare un eseguibile ATL utilizzando/CLR

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, quindi scegliere **Proprietà**.

1. Nella finestra di dialogo **Proprietà progetto** espandere il nodo accanto a **proprietà di configurazione** e selezionare **generale**. Nel riquadro destro, in **impostazioni predefinite progetto**, impostare **supporto Common Language Runtime** su **supporto Common Language Runtime (/CLR)**.

1. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Verificare che il **formato delle informazioni di debug** sia impostato su **database di programma/Zi** (non **/Zi**).

1. Selezionare il nodo **generazione codice** . Impostare **Abilita ricompilazione minima** su **No (/GM-)**. Impostare anche i **controlli di runtime di base** sul **valore predefinito**.

1. In **proprietà di configurazione** selezionare **C/C++** e quindi **generazione codice**. Assicurarsi che la **libreria di runtime** sia impostata su una **dll di debug multithread (/MDD)** o su **DLL multithread (/MD)**.

1. Per ogni file generato da MIDL (file C), fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni** , quindi scegliere **Proprietà**. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Impostare **Compila con supporto Common Language Runtime** su **Nessun supporto Common Language Runtime**.

### <a name="to-compile-an-atl-dll-by-using-clr"></a>Per compilare una DLL ATL utilizzando/CLR

1. Attenersi alla procedura descritta nella sezione "per compilare un eseguibile ATL mediante/CLR".

1. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **intestazioni precompilate**. Impostare **Crea/Usa intestazione precompilata** su **non usando intestazioni precompilate**.

   In alternativa, in **Esplora soluzioni** fare clic con il pulsante destro del mouse su stdafx. cpp, quindi scegliere **Proprietà**. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Impostare **Compila con supporto Common Language Runtime** su **Nessun supporto Common Language Runtime**.

1. Per il file che contiene DllMain e qualsiasi elemento chiamato, fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni**, quindi scegliere **Proprietà**. In **proprietà di configurazione** espandere il nodo accanto a **C/C++** e selezionare **generale**. Nel riquadro destro, in **impostazioni predefinite progetto**, impostare **Compila con supporto Common Language Runtime** su **Nessun supporto Common Language Runtime**.

## <a name="see-also"></a>Vedi anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
