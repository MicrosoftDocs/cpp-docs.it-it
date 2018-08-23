---
title: Librerie statiche (C + c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 02/03/2017
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5bb69b65d78b6369d872fd6f953f6ddde382c21b
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42602289"
---
# <a name="static-libraries-ccx"></a>Librerie statiche (C++/CX)
Una libreria statica che viene usata in un'app Universal Windows Platform (UWP) può contenere codice C++ conforme allo standard ISO, inclusi i tipi STL, nonché le chiamate alle API Win32 che non sono escluse dalla piattaforma di app di Windows Runtime. Una libreria statica utilizza i componenti Windows Runtime e può creare i componenti Windows Runtime con determinate restrizioni.  
  
## <a name="creating-static-libraries"></a>Creazione di librerie statiche  
  
#### <a name="to-create-a-static-library-for-use-in-a-uwp-app"></a>Per creare una libreria statica per l'uso in un'app UWP  
  
1.  Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**. Sotto **Visual C++** > **Windows Universal** sceglie **libreria statica (Windows universale)**.  
  
2.  In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**. Nel **delle proprietà** finestra di dialogo il **le proprietà di configurazione** > **C/C++** impostare **utilizzano Windows Runtime estensione** al **Sì (/ZW)**.  
  
 Quando si compila una nuova raccolta statica, se si effettua una chiamata a un'API Win32 esclusa per le app UWP, il compilatore genererà l'errore C3861, "Identificatore non trovato". Per cercare un metodo alternativo supportato per il Runtime di Windows, vedere [alternative alle API di Windows nelle App UWP](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).  
  
 Se si aggiunge un progetto di libreria statica C++ a una soluzione di app UWP, è necessario aggiornare le impostazioni delle proprietà del progetto di libreria in modo che la proprietà di supporto UWP è impostata su **Sì**. Senza questa impostazione, compila il codice e collegamenti, ma un errore si verifica quando si tenta di verificare l'app per i Microsoft Store. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.  
  
 Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:  
  
> **Warning LNK4264:** archiviazione del file oggetto compilato con /ZW in una libreria statica; si noti che quando si creano tipi Windows Runtime non è consigliabile eseguire il collegamento con una libreria statica che contiene i metadati di Windows Runtime.  
  
 È possibile ignorare l'avviso solo se la libreria statica non sta generando componenti Windows Runtime che vengono usati all'esterno della libreria stessa. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente Windows Runtime che è destinato all'utilizzo da altri componenti o l'app deve essere implementata in una libreria di collegamento dinamico (DLL).  
  
## <a name="see-also"></a>Vedere anche  
 [Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)