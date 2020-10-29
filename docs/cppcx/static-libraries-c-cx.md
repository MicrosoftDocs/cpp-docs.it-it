---
title: Librerie statiche (C++/CX)
ms.date: 02/03/2017
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
ms.openlocfilehash: 756f8d2c1af2c6be414ad39b4a96fa6cc7ccfb02
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924715"
---
# <a name="static-libraries-ccx"></a>Librerie statiche (C++/CX)

Una libreria statica usata in un'app piattaforma UWP (Universal Windows Platform) (UWP) può contenere codice C++ standard ISO, inclusi i tipi STL, e chiamate anche a API Win32 che non sono escluse dalla piattaforma dell'app Windows Runtime. Una libreria statica usa componenti Windows Runtime e può creare componenti Windows Runtime con determinate restrizioni.

## <a name="creating-static-libraries"></a>Creazione di librerie statiche

Le istruzioni per la creazione di un nuovo progetto variano a seconda della versione di Visual Studio installata. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="msvc-160"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2019"></a>Per creare una libreria statica UWP in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto** .

1. Nella parte superiore della finestra di dialogo impostare  **lingua** su **C++** , imposta **piattaforma** su **Windows** e imposta **tipo di progetto** su **UWP** .

1. Dall'elenco filtrato dei tipi di progetto scegliere **libreria statica (Windows universale-C++/CX)** e quindi fare clic su **Avanti** . Nella pagina successiva assegnare un nome al progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="<=msvc-150"

### <a name="to-create-a-uwp-static-library-in-visual-studio-2017-or-visual-studio-2015"></a>Per creare una libreria statica UWP in Visual Studio 2017 o Visual Studio 2015

1. Sulla barra dei menu scegliere **file**  >  **nuovo**  >  **progetto** . In **Visual C++**  >  **universale di Windows** scegliere **libreria statica (Windows universale)** .

1. In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà** . Nella finestra di dialogo **Proprietà** , nella pagina **proprietà di configurazione**  >  **C/C++** impostare **Usa Windows Runtime estensione** su **Sì (/ZW)** .

::: moniker-end

Quando si compila una nuova libreria statica, se si effettua una chiamata a un'API Win32 che viene esclusa per le app UWP, il compilatore genererà l'errore C3861 "identificatore non trovato". Per cercare un metodo alternativo supportato per la Windows Runtime, vedere [alternative alle API Windows nelle app UWP](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).

Se si aggiunge un progetto di libreria statica C++ a una soluzione di app UWP, potrebbe essere necessario aggiornare le impostazioni delle proprietà del progetto della libreria in modo che la proprietà di supporto UWP sia impostata su **Sì** . Senza questa impostazione, il codice compila i collegamenti, ma si verifica un errore quando si tenta di verificare l'app per la Microsoft Store. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.

Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:

> **avviso LNK4264:** archiviazione del file oggetto compilato con/ZW in una libreria statica; Si noti che durante la creazione di tipi di Windows Runtime non è consigliabile eseguire il collegamento a una libreria statica che contiene Windows Runtime metadati.

È possibile ignorare l'avviso solo se la libreria statica non sta producendo Windows Runtime componenti utilizzati all'esterno della libreria stessa. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente Windows Runtime destinato all'utilizzo da parte di altri componenti o app deve essere implementato in una libreria a collegamento dinamico (DLL).

## <a name="see-also"></a>Vedere anche

[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)
