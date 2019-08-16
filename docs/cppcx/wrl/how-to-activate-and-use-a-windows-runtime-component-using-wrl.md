---
title: 'Procedura: Attivare e usare un componente Windows Runtime usando WRL'
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 54828f02-6af3-45d1-b965-d0104442f8d5
ms.openlocfilehash: 9e15886e9045f15adb929678ba45023ce80fb084
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498399"
---
# <a name="how-to-activate-and-use-a-windows-runtime-component-using-wrl"></a>Procedura: Attivare e usare un componente Windows Runtime usando WRL

In questo documento viene illustrato come utilizzare la C++ libreria di modelli Windows Runtime (WRL) per inizializzare il Windows Runtime e come attivare e utilizzare un componente Windows Runtime.

Per utilizzare un componente, è necessario acquisire un puntatore di interfaccia al tipo implementato dal componente. Poiché la tecnologia sottostante della Windows Runtime è l'Component Object Model (COM), è necessario seguire le regole COM per mantenere un'istanza del tipo. Ad esempio, è necessario mantenere il *conteggio dei riferimenti* che determina quando il tipo viene eliminato dalla memoria.

Per semplificare l'utilizzo del Windows Runtime, Windows Runtime C++ libreria di modelli fornisce il modello di puntatore intelligente, [ComPtr\<T >](comptr-class.md), che esegue automaticamente il conteggio dei riferimenti. Quando si dichiara una variabile, specificare `ComPtr<`l' *identificatore*del *nome* `>` di interfaccia. Per accedere a un membro di interfaccia, applicare l'operatore di accesso ai`->`membri della freccia () all'identificatore.

> [!IMPORTANT]
> Quando si chiama una funzione di interfaccia, testare sempre il valore restituito HRESULT.

## <a name="activating-and-using-a-windows-runtime-component"></a>Attivazione e utilizzo di un componente Windows Runtime

Nei passaggi seguenti viene utilizzata `Windows::Foundation::IUriRuntimeClass` l'interfaccia per illustrare come creare una factory di attivazione per un componente Windows Runtime, creare un'istanza del componente e recuperare un valore della proprietà. Viene inoltre illustrato come inizializzare il Windows Runtime. L'esempio completo segue.

> [!IMPORTANT]
> Anche se in genere si usa C++ la libreria di modelli Windows Runtime in un'app piattaforma UWP (Universal Windows Platform) (UWP), questo esempio usa un'app console per l'illustrazione. Funzioni come `wprintf_s` non sono disponibili da un'app UWP. Per altre informazioni sui tipi e sulle funzioni che è possibile usare in un'app UWP, vedere [funzioni CRT non supportate nelle app piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e com per app UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

#### <a name="to-activate-and-use-a-windows-runtime-component"></a>Per attivare e utilizzare un componente Windows Runtime

1. Includere (`#include`) qualsiasi Windows Runtime necessario, Windows Runtime C++ libreria di modelli o C++ intestazioni della libreria standard.

   [!code-cpp[wrl-consume-component#2](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_1.cpp)]

   Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.

2. Inizializzare il thread in cui viene eseguita l'app. Ogni app deve inizializzare il modello di thread e Threading. Questo esempio usa la classe [Microsoft:: WRL:: Wrappers:: RoInitializeWrapper](roinitializewrapper-class.md) per inizializzare il Windows Runtime e specifica [RO_INIT_MULTITHREADED](/windows/win32/api/roapi/ne-roapi-ro_init_type) come modello di Threading. La `RoInitializeWrapper` classe chiama `Windows::Foundation::Initialize` in fase di costruzione `Windows::Foundation::Uninitialize` e quando viene distrutta.

   [!code-cpp[wrl-consume-component#3](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_2.cpp)]

   Nella seconda istruzione, l'operatore [RoInitializeWrapper:: HRESULT](roinitializewrapper-class.md#hresult) restituisce l'oggetto `HRESULT` dalla chiamata a. `Windows::Foundation::Initialize`

3. Creare una *Factory di attivazione* per `ABI::Windows::Foundation::IUriRuntimeClassFactory` l'interfaccia.

   [!code-cpp[wrl-consume-component#4](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_3.cpp)]

   Il Windows Runtime utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_Foundation_Uri` parametro è una stringa fornita dal Windows Runtime e contiene il nome della classe runtime richiesta.

4. Inizializza una variabile [Microsoft:: WRL:: Wrappers:: HString](hstring-class.md) che rappresenta l'URI `"http://www.microsoft.com"`.

   [!code-cpp[wrl-consume-component#6](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_4.cpp)]

   Nel Windows Runtime non si alloca memoria per una stringa che il Windows Runtime utilizzerà. Il Windows Runtime crea invece una copia della stringa in un buffer che gestisce e USA per le operazioni e quindi restituisce un handle al buffer creato.

5. Usare il `IUriRuntimeClassFactory::CreateUri` metodo factory per creare un `ABI::Windows::Foundation::IUriRuntimeClass` oggetto.

   [!code-cpp[wrl-consume-component#7](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_5.cpp)]

6. Chiamare il `IUriRuntimeClass::get_Domain` metodo per recuperare il valore `Domain` della proprietà.

   [!code-cpp[wrl-consume-component#8](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_6.cpp)]

7. Stampare il nome di dominio nella console e restituire. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-component#9](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_7.cpp)]

   La funzione [WindowsGetStringRawBuffer](/windows/win32/api/winstring/nf-winstring-windowsgetstringrawbuffer) Recupera il form Unicode sottostante della stringa URI.

Di seguito è riportato l'esempio completo:

[!code-cpp[wrl-consume-component#1](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_8.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-component.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

`cl.exe wrl-consume-component.cpp runtimeobject.lib`

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)