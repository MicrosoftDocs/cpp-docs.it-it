---
title: /Zc:twoPhase-(ricerca del nome in due fasi disable) | Documenti Microsoft
ms.custom: 
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- twoPhase
- /Zc:twoPhase
- VC.Project.VCCLCompilerTool.EnforceTypeConversionRules
dev_langs:
- C++
helpviewer_keywords:
- twoPhase
- disable two-phase name lookup
- /Zc:twoPhase
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4582a5532d9fd410224ee4174ca3973bfe539656
ms.sourcegitcommit: eeb2b5ad8d3d22514a7b9bd7d756511b69ae0ccf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2018
---
# <a name="zctwophase--disable-two-phase-name-lookup"></a>/Zc:twoPhase-(ricerca del nome in due fasi disable)

Quando il **/Zc:twoPhase-** è specificata l'opzione, il compilatore analizza e crea un'istanza di modelli di classe e i modelli di funzione non conforme esattamente come quello delle versioni di Visual Studio precedenti a Visual Studio 2017 versione 15.3. 

## <a name="syntax"></a>Sintassi

> **/Zc:twoPhase-**

## <a name="remarks"></a>Note

In Visual Studio 2017 versione 15.3 e versioni successive, per impostazione predefinita, il compilatore Usa ricerca del nome in due fasi per la risoluzione dei nomi di modello. Se **/Zc:twoPhase-** viene specificato, il compilatore passa alla precedente non conforme classe modello e una funzione modello nome risoluzione e la sostituzione di comportamento.

Il **/Zc:twoPhase-** opzione per abilitare il comportamento non conforme non è impostata per impostazione predefinita. Il [/ permissiva-](permissive-standards-conformance.md) opzione imposta in modo implicito il comportamento del compilatore di ricerca in due fasi conforme, ma può essere sottoposto a override utilizzando **/Zc:twoPhase-**.

I file di intestazione Windows SDK versione 10.0.15063.0 (creatori di aggiornamento o Redstone 2) e versioni precedenti non funzionano correttamente in modalità di conformità. È necessario utilizzare **/Zc:twoPhase-** per compilare codice per le versioni SDK quando si utilizza Visual Studio 2017 versione 15.3 e versioni successive. Le versioni del SDK di Windows a partire dalla versione 10.0.15254.0 (Redstone 3 o autunno creatori di aggiornamento) funzionano correttamente in modalità di conformità e non richiedono la **/Zc:twoPhase-** opzione.

Uso **/Zc:twoPhase-** se il codice richiede il comportamento precedente venga compilato correttamente. Considerare l'aggiornamento del codice per la conformità allo standard.

### <a name="compiler-behavior-under-zctwophase-"></a>Comportamento del compilatore in /Zc:twoPhase-

Nelle versioni del compilatore prima di Visual Studio 2017 versione 15.3 e le circostanze **/Zc:twoPhase-** viene specificato, il compilatore utilizza questo comportamento:

- Analizza solo la dichiarazione di modello dell'intestazione della classe e l'elenco delle classi basa. Corpo del modello viene acquisito come un flusso di token. Nessun corpi di funzione, inizializzatori, argomenti predefiniti o noexcept argomenti vengono analizzati. Il modello di classe è una pseudo-creare un'istanza su un tipo provvisorio per verificare che le dichiarazioni nel modello di classe siano corrette. Considerare questo modello di classe:

   ```cpp
   template <typename T> class Derived : public Base<T> { ... }
   ```

   La dichiarazione di modello `template <typename T`>, dell'intestazione della classe `class Derived`e l'elenco delle classi base `public Base<T>` vengono analizzati, ma il corpo del modello viene acquisita come un flusso di token.

- Durante l'analisi di un modello di funzione, il compilatore analizza solo la firma della funzione. Il corpo della funzione non viene analizzato. Invece viene acquisito come un flusso di token.

Di conseguenza, se il corpo del modello contiene errori di sintassi e il modello non viene mai creata un'istanza, non vengono diagnosticati mai gli errori.

Un altro effetto di questo comportamento è nella risoluzione dell'overload. A causa del modo che il flusso di token è espansi nel sito di creazione dell'istanza, i simboli che non sono visibili nella dichiarazione di modello possono essere visibili al momento della creazione di un'istanza ed partecipa alla risoluzione dell'overload. Questo può causare ai modelli che modificano il comportamento in base al codice che non è visibile quando il modello è stato definito, applichino allo standard.

Si consideri, ad esempio, il seguente codice:

```cpp
#include <cstdio>

void func(void*) { std::puts("The call resolves to void*") ;}

template<typename T> void g(T x)
{
    func(0);
}

void func(int) { std::puts("The call resolves to int"); }

int main() 
{
    g(3.14);
}
```

Quando viene compilato in **/Zc:twoPhase-**, il programma stampa "viene risolta la chiamata a int". In modalità di conformità sotto **/ permissiva-**, il programma stampa "la chiamata viene risolta void *", poiché il secondo overload di `func` non è visibile quando il compilatore rileva il modello.

*Nomi dipendenti*, dispone di nomi che dipendono da un parametro di modello, il comportamento di ricerca che è diverso nei **/Zc:twoPhase-**. In modalità di conformità, i nomi dei dipendenti non sono associati al momento della definizione del modello. Al contrario, questi nomi vengono ricercati quando viene creata un'istanza di modello. Per le chiamate di funzione con un nome di funzione dipendente, il nome è associato al set di funzioni che sono visibili al momento della chiamata nella definizione del modello, come illustrato in precedenza. Sia il punto della definizione del modello di punti in cui viene creata un'istanza del modello vengono aggiunti gli overload aggiuntivi dalla ricerca dipendente dall'argomento. Le due fasi di ricerca in due fasi sono la ricerca per i nomi non dipendenti al momento della definizione di modello e la ricerca per i nomi dipendenti al momento della creazione dell'istanza modello. Sotto **/Zc:twoPhase-**, il compilatore non esegue ricerca dipendente dall'argomento separatamente dalla ricerca normale, non qualificato (vale a dire, non è in due fasi ricerca), in modo che i risultati della risoluzione dell'overload potrebbero essere diversi.

Di seguito è riportato un altro esempio:

```cpp
// zctwophase1.cpp
// Compile by using
// cl /EHsc /W4 /permissive- zctwophase1.cpp
// cl /EHsc /W4 /permissive- /Zc:twoPhase- zctwophase1.cpp

#include <cstdio>

void func(long) { std::puts("func(long)"); }

template <typename T> void tfunc(T t) {
    func(t);
}

void func(int) { std::puts("func(int)"); }

namespace NS {
    struct S {};
    void func(S) { std::puts("NS::func(NS::S)"); }
}

int main() {
    tfunc(1729);
    NS::S s;
    tfunc(s);
}
```

Quando viene compilato senza **/Zc:twoPhase-**, questo viene stampato

```Output
func(long)
NS::func(NS::S)
```

Quando viene compilato con **/Zc:twoPhase-**, questo viene stampato

```Output
func(int)
NS::func(NS::S)
```

In modalità di conformità in **/ permissiva-**, la chiamata `tfunc(1729)` si risolve nel `void func(long)` overload, non `void func(int)` overload nel **/Zc:twoPhase-**, in quanto il non qualificato `func(int)` dichiarato dopo la definizione del modello e non vengono trovati tramite la ricerca dipendente dall'argomento. Ma `void func(S)` partecipare ricerca dipendente dall'argomento, pertanto viene aggiunta all'overload impostato per la chiamata `tfunc(s)` anche se è dichiarato come dopo la funzione di modello.

### <a name="update-your-code-for-two-phase-conformance"></a>Aggiornare il codice per conformità in due fasi

Le versioni precedenti del compilatore non richiedono le parole chiave `template` e `typename` everywhere lo Standard C++ sono necessarie. Queste parole chiave sono necessari in alcune posizioni per evitare ambiguità tra modalità compilatori devono analizzare un nome di dipendente durante la prima fase della ricerca. Ad esempio:

`T::Foo<a || b>(c);`

Analizza un compilatore conforme `Foo` come una variabile nell'ambito del `T`, vale a dire questo codice è logico- o un'espressione con `T::foo < a` come operando di sinistra e `b > (c)` come operando destro. Se si intende usare `Foo` come un modello di funzione, è necessario indicare che questo è un modello aggiungendo il `template` (parola chiave):

`T::template Foo<a || b>(c);`

Nelle versioni precedenti a Visual Studio 2017 versione 15.3 e le circostanze **/Zc:twoPhase-** è specificato, il compilatore consente questo codice senza il `template` (parola chiave) e lo interpreta come una chiamata a un modello di funzione con un argomento `a || b`, in quanto analizza modelli in modo molto limitato. Il codice precedente non è analizzato affatto nella prima fase. Durante la seconda fase non è presente un contesto sufficiente per indicare che `T::Foo` è un modello, anziché una variabile in modo che il compilatore non impone l'utilizzo della parola chiave.

Questo comportamento può essere visualizzato anche eliminando la parola chiave `typename` prima dei nomi dei corpi di modello di funzione, inizializzatori, gli argomenti predefiniti e gli argomenti noexcept. Ad esempio:

```cpp
template<typename T>
typename T::TYPE func(typename T::TYPE*)
{
    /* typename */ T::TYPE i;
}
```

Se non si utilizza la parola chiave `typename` nel corpo della funzione, questo codice viene compilato in **/Zc:twoPhase-**, ma non si trova **/ permissiva-**. Il `typename` parola chiave è obbligatorio per indicare che il `TYPE` è dipendente. Poiché il corpo non viene analizzato sotto **/Zc:twoPhase-**, hierarchyinfoguid il compilatore richiede la parola chiave. In **/ permissiva-** in modalità di conformità, codice senza il `typename` (parola chiave) genera errori. Per la migrazione del codice per Visual Studio 2017 versione 15.3 e versione successiva, inserire il `typename` (parola chiave) in cui risulta manca.

Analogamente, prendere in considerazione questo esempio di codice:

```cpp
template<typename T>
typename T::template X<T>::TYPE func(typename T::TYPE)
{
    typename T::/* template */ X<T>::TYPE i;
}
```

Sotto **/Zc:twoPhase-** e nei compilatori precedenti, il compilatore richiede solo la `template` (parola chiave) nella riga 2. Per impostazione predefinita sia in modalità di conformità, il compilatore ora richiede anche il `template` parola chiave nella riga 4 per indicare che `T::X<T>` è un modello. Cercare il codice che non contiene questa parola chiave e specificare in modo da rendere il codice è conforme allo standard.

Per ulteriori informazioni sui problemi di conformità, vedere [miglioramenti alla conformità di C++ in Visual Studio](../../cpp-conformance-improvements-2017.md) e [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:twoPhase-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
