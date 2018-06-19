---
title: 'Procedura: compilare codice MFC e ATL tramite - clr | Documenti Microsoft'
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
ms.openlocfilehash: b7412d69230bcb6375a042d6cf8e8f27a3d9eac9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33136067"
---
# <a name="how-to-compile-mfc-and-atl-code-by-using-clr"></a>Procedura: compilare codice MFC e ATL tramite /clr
In questo argomento viene illustrato come compilare programmi MFC e ATL esistenti per Common Language Runtime.  
  
### <a name="to-compile-an-mfc-executable-or-regular-mfc-dll-by-using-clr"></a>Per compilare una DLL o eseguibile MFC regolari MFC tramite /clr  
  
1.  Fare clic sul progetto in **Esplora** e quindi fare clic su **proprietà**.  
  
2.  Nel **le proprietà del progetto** finestra di dialogo espandere il nodo accanto a **le proprietà di configurazione** e selezionare **generale**. Nel riquadro di destra, in **impostazioni predefinite progetto**, impostare **supporto Common Language Runtime** a **supporto Common Language Runtime (o clr)**.  
  
     Nello stesso riquadro, assicurarsi che **uso di MFC** è impostato su **Usa MFC in una DLL condivisa**.  
  
3.  In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Assicurarsi che **formato informazioni di Debug** è impostato su **Database di programma /Zi** (non **/ZI**).  
  
4.  Selezionare il **la generazione di codice** nodo. Impostare **Abilita ricompilazione minima** a **n (o Gm-)**. Impostare inoltre **controlli Runtime di base** a **predefinito**.  
  
5.  In **le proprietà di configurazione**selezionare **C/C++** e quindi **la generazione di codice**. Assicurarsi che **libreria di Runtime** è impostato su **DLL di Debug multithread (o /MDd)** o **DLL multithread (/ MD)**.  
  
6.  In stdafx. h, aggiungere la riga seguente.  
  
    ```  
    #using <System.Windows.Forms.dll>  
    ```  
  
### <a name="to-compile-an-mfc-extension-dll-by-using-clr"></a>Per compilare una DLL di estensione MFC tramite /clr  
  
1.  Seguire i passaggi in "To compilare una DLL o eseguibile MFC regolari MFC tramite /clr".  
  
2.  In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **intestazioni precompilate**. Impostare **Crea/Usa intestazione precompilata** a **non Usa intestazioni precompilate**.  
  
     In alternativa, in **Esplora**, fare doppio clic su Stdafx.cpp e quindi fare clic su **proprietà**. In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Impostare **compila con il supporto Common Language Runtime** a **supporto No Common Language Runtime**.  
  
3.  Per il file che contiene DllMain e qualsiasi chiama, in **Esplora**, il file e quindi fare clic su **proprietà**. In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Nel riquadro di destra, in **impostazioni predefinite progetto**, impostare **compila con il supporto Common Language Runtime** a **supporto No Common Language Runtime**.  
  
### <a name="to-compile-an-atl-executable-by-using-clr"></a>Per compilare un eseguibile ATL tramite /clr  
  
1.  In **Esplora**, fare clic sul progetto e quindi fare clic su **proprietà**.  
  
2.  Nel **le proprietà del progetto** finestra di dialogo espandere il nodo accanto a **le proprietà di configurazione** e selezionare **generale**. Nel riquadro di destra, in **impostazioni predefinite progetto**, impostare **supporto Common Language Runtime** a **supporto Common Language Runtime (o clr)**.  
  
3.  In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Assicurarsi che **formato informazioni di Debug** è impostato su **Database di programma /Zi** (non **/ZI**).  
  
4.  Selezionare il **la generazione di codice** nodo. Impostare **Abilita ricompilazione minima** a **n (o Gm-)**. Impostare inoltre **controlli Runtime di base** a **predefinito**.  
  
5.  In **le proprietà di configurazione**selezionare **C/C++** e quindi **la generazione di codice**. Assicurarsi che **libreria di Runtime** è impostato su **DLL di Debug multithread (o /MDd)** o **DLL multithread (/ MD)**.  
  
6.  Per ogni file generati da MIDL (file C), fare doppio clic su file in **Esplora** e quindi fare clic su **proprietà**. In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Impostare **compila con il supporto Common Language Runtime** a **supporto No Common Language Runtime**.  
  
### <a name="to-compile-an-atl-dll-by-using-clr"></a>Per compilare una DLL ATL tramite /clr  
  
1.  Seguire i passaggi nella sezione "per compilare un eseguibile ATL tramite /clr".  
  
2.  In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **intestazioni precompilate**. Impostare **Crea/Usa intestazione precompilata** a **non Usa intestazioni precompilate**.  
  
     In alternativa, in **Esplora**, fare doppio clic su Stdafx.cpp e quindi fare clic su **proprietà**. In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Impostare **compila con il supporto Common Language Runtime** a **supporto No Common Language Runtime**.  
  
3.  Per il file che contiene DllMain e qualsiasi chiama, in **Esplora**, il file e quindi fare clic su **proprietà**. In **le proprietà di configurazione**, espandere il nodo accanto a **C/C++** e selezionare **generale**. Nel riquadro di destra, in **impostazioni predefinite progetto**, impostare **compila con il supporto Common Language Runtime** a **supporto No Common Language Runtime**.  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)