---
title: Librerie statiche (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 02/03/2017
ms.prod: windows-client-threshold
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7a64e1f35350968f16a24a46b8611820d68bf785
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="static-libraries-ccx"></a>Librerie statiche (C++/CX)
Una libreria statica utilizzata in un'app Universal Windows Platform (UWP) può contenere codice C++ conforme allo standard ISO, inclusi i tipi STL e chiamate alle API Win32 che non sono escluse dalla piattaforma di app di Windows Runtime. Una libreria statica utilizza i componenti Windows Runtime e possono essere creati i componenti Windows Runtime con alcune limitazioni.  
  
## <a name="creating-static-libraries"></a>Creazione di librerie statiche  
  
#### <a name="to-create-a-static-library-for-use-in-a-uwp-app"></a>Per creare una libreria statica per l'utilizzo in un'app UWP  
  
1.  Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**. In **Visual C++** > **universali di Windows** scegliere **libreria statica (Windows universale)**.  
  
2.  In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**. Nel **proprietà** della finestra di dialogo di **le proprietà di configurazione** > **C/C++** impostare **utilizzano Windows Runtime estensione** a **Sì (/ZW)**.  
  
 Quando si compila una nuova libreria statica, se si effettua una chiamata a un'API Win32 esclusa per App UWP, il compilatore genererà l'errore C3861, "Identificatore non trovato". Per cercare un metodo alternativo supportato per Windows Runtime, vedere [alternative alle API di Windows nelle App UWP](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).  
  
 Se si aggiunge un progetto di libreria statica C++ a una soluzione di app UWP, è necessario aggiornare le impostazioni delle proprietà del progetto di libreria in modo che la proprietà di supporto UWP è impostata su **Sì**. Senza questa impostazione, il codice verrà compilato e collegamenti, ma un errore si verifica quando si tenta di verificare l'applicazione per Microsoft Store. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.  
  
 Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:  
  
> **avviso LNK4264:** archiviazione del file oggetto compilato con /ZW in una libreria statica; si noti che quando si creano tipi Windows Runtime non è consigliabile eseguire il collegamento con una libreria statica che contiene i metadati di Windows Runtime.  
  
 È possibile ignorare l'avviso solo se la libreria statica non sta generando componenti Windows Runtime che vengono utilizzati all'esterno della libreria. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente Windows Runtime che è destinato il consumo da altri componenti o App deve essere implementata in una libreria di collegamento dinamico (DLL).  
  
## <a name="see-also"></a>Vedere anche  
 [Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)