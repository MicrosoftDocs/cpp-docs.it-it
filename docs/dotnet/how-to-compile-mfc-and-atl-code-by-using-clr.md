---
title: "Procedura: compilare codice MFC e ATL tramite /clr | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/clr (opzione del compilatore) [C++], compilazione di codice ATL e MFC"
  - "ATL [C++], interoperabilità"
  - "DLL di estensione [C++], opzione del compilatore /clr"
  - "interoperabilità [C++], opzione del compilatore /clr"
  - "interoperabilità [C++], opzione del compilatore /clr"
  - "MFC [C++], interoperabilità"
  - "assembly misti [C++], codice ATL"
  - "assembly misti [C++], codice MFC"
  - "DLL regolari [D++], opzione del compilatore /clr"
ms.assetid: 12464bec-33a4-482c-880a-c078de7f6ea5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: compilare codice MFC e ATL tramite /clr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come compilare programmi MFC e ATL esistenti per Common Language Runtime.  
  
### Per compilare una DLL regolare o un eseguibile MFC tramite \/clr  
  
1.  In **Esplora soluzioni**, fare clic con il pulsante destro del mouse sul progetto e scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Proprietà progetto** espandere il nodo accanto a **Proprietà di configurazione** e selezionare **Generale**.  Nella sezione **Impostazioni predefinite progetto** del riquadro di destra impostare **Supporto Common Language Runtime** su **Supporto Common Language Runtime \(\/clr\)**.  
  
     Nello stesso riquadro assicurarsi che l'opzione **Uso di MFC** sia impostata su **Usa MFC in una DLL condivisa**.  
  
3.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Assicurarsi che l'opzione **Formato informazioni di debug** sia impostata su **Database di programma \(\/Zi\)** \(non **\/ZI**\).  
  
4.  Selezionare il nodo **Generazione codice**.  Impostare **Attiva ricompilazione minima** su **No \(\/Gm\-\)**.  Impostare inoltre **Controlli runtime di base** sul valore **Predefinito**.  
  
5.  In **Proprietà di configurazione** selezionare **C\/C\+\+** e quindi **Generazione codice**.  Assicurarsi che l'opzione **Libreria di runtime** sia impostata su **DLL di debug multithread \(\/MDd\)** o **DLL multithread \(\/MD\)**.  
  
6.  In Stdafx.h aggiungere la riga seguente.  
  
    ```  
    #using <System.Windows.Forms.dll>  
    ```  
  
### Per compilare una DLL di estensione MFC tramite \/clr  
  
1.  Attenersi alla procedura descritta nella sezione "Per compilare una DLL regolare o un eseguibile MFC tramite \/clr".  
  
2.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Intestazioni precompilate**.  Impostare **Crea\/Usa intestazione precompilata** su **Senza intestazioni precompilate**.  
  
     In alternativa, è possibile fare clic con il pulsante destro del mouse su Stdafx.cpp in **Esplora soluzioni**, quindi scegliere **Proprietà**.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Impostare **Compila con il supporto Common Language Runtime** su **Senza supporto Common Language Runtime**.  
  
3.  Per il file che contiene DllMain e gli oggetti da esso chiamati, in **Esplora soluzioni** fare clic con il pulsante destro del mouse sul file, quindi scegliere **Proprietà**.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Nella sezione **Impostazioni predefinite progetto** del riquadro di destra impostare **Compila con il supporto Common Language Runtime** su **Senza supporto Common Language Runtime**.  
  
### Per compilare un eseguibile ATL tramite \/clr  
  
1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, quindi scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Proprietà progetto** espandere il nodo accanto a **Proprietà di configurazione** e selezionare **Generale**.  Nella sezione **Impostazioni predefinite progetto** del riquadro di destra impostare **Supporto Common Language Runtime** su **Supporto Common Language Runtime \(\/clr\)**.  
  
3.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Assicurarsi che l'opzione **Formato informazioni di debug** sia impostata su **Database di programma \(\/Zi\)** \(non **\/ZI**\).  
  
4.  Selezionare il nodo **Generazione codice**.  Impostare **Attiva ricompilazione minima** su **No \(\/Gm\-\)**.  Impostare inoltre **Controlli runtime di base** sul valore **Predefinito**.  
  
5.  In **Proprietà di configurazione** selezionare **C\/C\+\+** e quindi **Generazione codice**.  Assicurarsi che l'opzione **Libreria di runtime** sia impostata su **DLL di debug multithread \(\/MDd\)** o **DLL multithread \(\/MD\)**.  
  
6.  Per ogni file generato da MIDL \(file C\), fare clic con il pulsante destro del mouse sul file in **Esplora soluzioni**, quindi scegliere **Proprietà**.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Impostare **Compila con il supporto Common Language Runtime** su **Senza supporto Common Language Runtime**.  
  
### Per compilare una DLL ATL tramite \/clr  
  
1.  Attenersi alla procedura descritta nella sezione "Per compilare un eseguibile ATL tramite \/clr".  
  
2.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Intestazioni precompilate**.  Impostare **Crea\/Usa intestazione precompilata** su **Senza intestazioni precompilate**.  
  
     In alternativa, è possibile fare clic con il pulsante destro del mouse su Stdafx.cpp in **Esplora soluzioni**, quindi scegliere **Proprietà**.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Impostare **Compila con il supporto Common Language Runtime** su **Senza supporto Common Language Runtime**.  
  
3.  Per il file che contiene DllMain e gli oggetti da esso chiamati, in **Esplora soluzioni** fare clic con il pulsante destro del mouse sul file, quindi scegliere **Proprietà**.  In **Proprietà di configurazione** espandere il nodo in corrispondenza di **C\/C\+\+** e selezionare **Generale**.  Nella sezione **Impostazioni predefinite progetto** del riquadro di destra impostare **Compila con il supporto Common Language Runtime** su **Senza supporto Common Language Runtime**.  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)