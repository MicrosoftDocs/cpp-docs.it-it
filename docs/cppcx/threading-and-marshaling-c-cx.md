---
title: "Threading e marshalling (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4451"
helpviewer_keywords: 
  - "problemi relativi al threading, C++/CX"
  - "flessibilità, C++/CX"
  - "C++/CX, problemi relativi al threading"
ms.assetid: 83e9ca1d-5107-4194-ae6f-e01bd928c614
caps.latest.revision: 17
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 17
---
# Threading e marshalling (C++/CX)
Nella maggior parte dei casi, è possibile accedere alle istanze di classi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], come gli oggetti C\+\+ standard, da qualsiasi thread. Tali classi sono indicate come "Agile". Un numero ridotto di classi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] fornite con Windows, tuttavia non sono Agile e devono essere utilizzate come oggetti COM piuttosto che come oggetti C\+\+ standard. Non occorre essere un esperto di COM per usare le classi non Agile, ma è importante tenere in considerazione il modello di threading della classe e il relativo comportamento di marshalling. Questo articolo illustra i rari scenari in cui è necessario utilizzare un'istanza di una classe non Agile e fornisce indicazioni in merito.  
  
## Modello di threading e comportamento di marshalling  
 Una classe di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] può supportare l'accesso simultaneo al thread in vari modi, come indicato da due attributi della classe:  
  
-   L'attributo `ThreadingModel` può contenere uno dei valori STA, MTA o Both, definiti dall'enumerazione `ThreadingModel`.  
  
-   L'attributo `MarshallingBehavior` può contenere uno dei valori Agile, None o Standard definiti dall'enumerazione `MarshallingType`.  
  
 L'attributo `ThreadingModel` specifica dove viene caricata la classe all'attivazione: solo in un contesto di thread UI \(STA\), solo in un contesto di thread in background \(MTA\) o nel contesto del thread che crea l'oggetto \(Both\). I valori dell'attributo `MarshallingBehavior` fanno riferimento al comportamento dell'oggetto nei diversi contesti di threading; nella maggior parte dei casi non è necessario comprendere il significato di questi valori in dettaglio.  Nel 90% delle classi fornite dall'API di Windows gli attributi sono impostati nel seguente modo: `ThreadingModel`\=Both and `MarshallingType`\=Agile. Ciò significa che sono in grado di gestire in modo trasparente ed efficace i dettagli di threading di basso livello.   Quando utilizzi `ref new` per creare una classe "Agile", puoi chiamare i metodi dal thread dell'applicazione principale o da uno o più thread di lavoro.  In altre parole, puoi utilizzare una classe Agile da qualsiasi punto del codice, indipendentemente che sia fornita da Windows o da terze parti. Non è necessario che ti preoccupi del modello di threading o del comportamento di marshalling della classe.  
  
## Utilizzo di componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]  
 Per creare un'app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)], devi interagire con componenti sia Agile sia non Agile. L'interazione con componenti non Agile può causare la generazione del seguente avviso.  
  
### Avviso del compilatore durante l'utilizzo di classi non Agile \(C4451\)  
 Per vari motivi, alcune classi non possono essere Agile. Se accedi a istanze di classi non Agile sia da un thread dell'interfaccia utente che da un thread in background, verifica attentamente il corretto comportamento in fase di esecuzione. Il compilatore di Visual C\+\+ genera alcuni avvisi quando viene creata un'istanza di una classe di runtime non Agile nell'applicazione in ambito globale o quando si dichiara un tipo non Agile come membro della classe in una classe di riferimento contrassegnata come Agile.  
  
 Tra le classi non Agile, le più semplici da gestire sono quelle che contengono i seguenti attributi con le seguenti impostazioni: `ThreadingModel` \= Both e `MarshallingType` \= Standard.  Queste classi possono essere trasformate in Agile semplicemente utilizzando la classe di supporto `Agile<T>`.   Nell'esempio riportato di seguito vengono mostrati una dichiarazione di un oggetto non Agile di tipo `Windows::Security::Credentials::UI::CredentialPickerOptions^` e l'avviso del compilatore che viene emesso di conseguenza.  
  
```  
  
ref class MyOptions  
    {  
    public:  
        property Windows::Security::Credentials::UI::CredentialPickerOptions^ Options  
  
        {  
            Windows::Security::Credentials::UI::CredentialPickerOptions^ get()   
            {  
                return _myOptions;  
            }  
        }  
    private:  
        Windows::Security::Credentials::UI::CredentialPickerOptions^ _myOptions;  
    };  
```  
  
 Ecco l'avviso che viene generato:  
  
> `Warning 1 warning C4451: 'Platform::Agile<T>::_object' : Usage of ref class 'Windows::Security::Credentials::UI::CredentialPickerOptions' inside this context can lead to invalid marshaling of object across contexts. Consider using 'Platform::Agile<Windows::Security::Credentials::UI::CredentialPickerOptions>' instead`  
  
 Quando aggiungi un riferimento, nell'ambito del membro o globale, a un oggetto che presenta un comportamento di marshalling "Standard", viene generato dal compilatore un avviso che consiglia di eseguire il wrapping del tipo in `Platform::Agile<T>`: `Consider using 'Platform::Agile<Windows::Security::Credentials::UI::CredentialPickerOptions>' instead` Se utilizzi `Agile<T>`, puoi utilizzare la classe come qualsiasi altra classe Agile. Utilizza `Platform::Agile<T>` nelle seguenti condizioni:  
  
-   La variabile non Agile è dichiarata in ambito globale.  
  
-   La variabile non Agile è dichiarata in ambito di classe ed esiste la possibilità che il codice utilizzi il puntatore in un apartment differente senza un corretto marshalling.  
  
 Se nessuna di queste condizioni è applicabile, puoi contrassegnare la classe contenitore come non Agile. In altre parole, devi contenere direttamente gli oggetti non Agile solo nelle classi non Agile e gli oggetti non Agile tramite Platform::Agile\<T\> nelle classi Agile.  
  
 Nell'esempio riportato di seguito viene illustrato come utilizzare `Agile<T>` per ignorare in sicurezza l'avviso.  
  
```  
  
#include <agile.h>  
ref class MyOptions  
    {  
    public:  
        property Windows::Security::Credentials::UI::CredentialPickerOptions^ Options  
  
        {  
            Windows::Security::Credentials::UI::CredentialPickerOptions^ get()   
            {  
                return m_myOptions.Get();  
            }  
        }  
    private:  
        Platform::Agile<Windows::Security::Credentials::UI::CredentialPickerOptions^> m_myOptions;  
  
    };  
  
```  
  
 Nota che `Agile` non può essere passata come valore restituito o parametro in una classe di riferimento. Il metodo `Agile<T>::Get()` restituisce un handle a un oggetto \(^\) che è possibile passare attraverso l'interfaccia ABI a un metodo o una proprietà pubblica.  
  
 In Visual C\+\+, quando si crea un riferimento a una classe di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in\-process con un comportamento di marshalling impostato su "None", il compilatore visualizza un avviso C4451 ma non suggerisce l'utilizzo di `Platform::Agile<T>`.  Il compilatore non offre altro supporto oltre a questo avviso, pertanto è tua responsabilità utilizzare la classe nel modo corretto e assicurarti che il codice chiami i componenti STA solo dal thread dell'interfaccia utente e i componenti MTA solo da un thread in background.  
  
## Creazione di componenti Agile di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]  
 Una classe di riferimento definita in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)], è Agile per impostazione predefinita. Ciò significa che il relativo attributo `ThreadingModel` è impostato su Both e l'attributo `MarshallingType` è impostato su Agile.  Se utilizzi [!INCLUDE[cppwrl](../cppcx/includes/cppwrl-md.md)], puoi trasformare la classe in Agile derivando da `FtmBase`, che utilizza `FreeThreadedMarshaller`.  Se crei una classe con l'attributo `ThreadingModel` impostato su Both o l'attributo `ThreadingModel` impostato su MTA, assicurati che la classe sia thread\-safe. Per altre informazioni, vedere l'articolo sulla [creazione e l'utilizzo degli oggetti \(WRL\)](http://msdn.microsoft.com/it-it/d5e42216-e888-4f1f-865a-b5ccd0def73e).  
  
 È possibile modificare il modello di threading e il comportamento di marshalling di una classe di riferimento. Tuttavia, se apporti modifiche che rendono la classe non Agile, è importante che tu comprenda le implicazioni che ne derivano.  
  
 L'esempio seguente mostra come applicare gli attributi `MarshalingBehavior` e `ThreadingModel` a una classe di runtime in una libreria di classi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Quando un'applicazione utilizza la DLL e utilizza la parola chiave `ref new` per attivare un oggetto classe `MySTAClass`, l'oggetto viene attivato in un apartment a thread singolo e non supporta il marshalling.  
  
```  
using namespace Windows::Foundation::Metadata;  
using namespace Platform;  
  
[Threading(ThreadingModel::STA)]  
[MarshalingBehavior(MarshalingType::None)]   
public ref class MySTAClass  
{  
};  
  
```  
  
 In una classe non sealed è necessario impostare gli attributi di threading e di marshalling in modo che il compilatore possa verificare che le classi derivate includano lo stesso valore per questi attributi. Se per la classe queste impostazioni non sono configurate in modo esplicito, viene generato un errore e la compilazione non viene completata. Qualsiasi classe derivata da una classe non sealed genera un errore da parte del compilatore in ognuno dei seguenti casi:  
  
-   Gli attributi `ThreadingModel` e `MarshallingBehavior` non sono definiti nella classe derivata.  
  
-   I valori degli attributi `ThreadingModel` e `MarshallingBehavior` nella classe derivata non corrispondono a quelli nella classe di base.  
  
 Le informazioni di marshalling e di threading richieste da un componente di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] di terze parti sono specificate nelle informazioni di registrazione del manifesto dell'applicazione. Consigliamo di rendere Agile tutti i componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. In questo modo il codice client potrà chiamare il componente da un thread qualsiasi dell'applicazione. Inoltre, si otterranno prestazioni migliori dalle chiamate essendo chiamate dirette che non dispongono di marshalling. Questa modalità di creazione della classe consente al codice client di non utilizzare `Platform::Agile<T>` per utilizzare la classe.  
  
## Vedere anche  
 [\(NOTINBUILD\) Argomenti avanzati](http://msdn.microsoft.com/it-it/1ccff0cf-a6cc-47ef-a05f-eba6307b3ced)   
 [ThreadingModel](http://msdn.microsoft.com/library/windows/apps/xaml/windows.foundation.metadata.threadingmodel.aspx)   
 [MarshallingBehavior](http://msdn.microsoft.com/library/windows/apps/xaml/windows.foundation.metadata.marshalingbehaviorattribute.aspx)