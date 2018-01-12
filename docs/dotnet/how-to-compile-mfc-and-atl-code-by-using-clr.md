---
title: 'Procedura: compilare codice MFC e ATL tramite - clr | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
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
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f03e324cf4f88d47232cba5e15ec65181af91feb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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