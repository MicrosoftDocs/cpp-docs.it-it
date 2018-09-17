---
title: /Zc:twoPhase-(disabilita la ricerca del nome in due fasi) | Microsoft Docs
ms.custom: ''
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: 30647ab07984c393b10d7c0fb74d0e2be35cdf26
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723294"
---
# <a name="zctwophase--disable-two-phase-name-lookup"></a>/Zc:twoPhase-(disabilita la ricerca del nome in due fasi)

Quando la **/Zc:twoPhase-** opzione è specificata, il compilatore analizza e crea un'istanza di modelli di classe e i modelli di funzione nello stesso modo non conforme come le versioni di Visual Studio precedenti a Visual Studio 2017 versione 15.3.

## <a name="syntax"></a>Sintassi

> **/Zc:twoPhase-**

## <a name="remarks"></a>Note

In Visual Studio 2017 versione 15.3 e versioni successive, per impostazione predefinita, il compilatore Usa la ricerca del nome in due fasi per la risoluzione dei nomi di modello. Se **/Zc:twoPhase-** viene specificato, il compilatore ripristinato il precedente non conforme classi modello e la funzione modello nome risoluzione e la sostituzione di comportamento.

Il **/Zc:twoPhase-** opzione per abilitare il comportamento non conforme non è impostata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione imposta in modo implicito il comportamento del compilatore di ricerca in due fasi conforme, ma può essere sottoposto a override utilizzando **/Zc:twoPhase-**.

I file di intestazione di Windows SDK versione 10.0.15063.0 (Creators Update o Pietrarossa 2) e versioni precedenti non funzionano correttamente in modalità di conformità. È necessario utilizzare **/Zc:twoPhase-** per compilare codice per tali versioni SDK quando si usa Visual Studio 2017 versione 15.3 e versioni successive. Le versioni del SDK di Windows a partire dalla versione 10.0.15254.0 (3 Pietrarossa o Fall Creators Update) funzionano correttamente in modalità di conformità e non richiedono la **/Zc:twoPhase-** opzione.

Uso **/Zc:twoPhase-** se il codice richiede il comportamento precedente venga compilato correttamente. Consigliabile prendere in considerazione l'aggiornamento del codice in modo conforme allo standard.

### <a name="compiler-behavior-under-zctwophase-"></a>Comportamento del compilatore in /Zc:twoPhase-

Nelle versioni del compilatore prima di Visual Studio 2017 versione 15.3 e il momento **/Zc:twoPhase-** viene specificato, il compilatore Usa questo comportamento:

- Viene analizzata solo la dichiarazione di modello, l'intestazione della classe e l'elenco delle classi base. Corpo del modello viene acquisito come un flusso di token. Nessun corpi delle funzioni, gli inizializzatori, gli argomenti predefiniti o noexcept argomenti vengono analizzati. Il modello di classe è pseudo-creare un'istanza su un tipo provvisorio per convalidare che le dichiarazioni nel modello di classe siano corrette. Considerare questo modello di classe:

   ```cpp
   template <typename T> class Derived : public Base<T> { ... }
   ```

   La dichiarazione di modello, `template <typename T`>, l'intestazione della classe `class Derived`e l'elenco delle classi base `public Base<T>` vengono analizzati, ma il corpo del modello viene acquisita come un flusso di token.

- Durante l'analisi di un modello di funzione, il compilatore analizza solo la firma della funzione. Il corpo della funzione non viene mai analizzato. Al contrario, viene acquisito come un flusso di token.

Di conseguenza, se il corpo del modello contiene errori di sintassi e il modello non viene mai creata un'istanza, non vengono diagnosticati mai gli errori.

Un altro effetto di questo comportamento è nella risoluzione dell'overload. A causa del modo che il flusso di token è espanso nel sito della creazione dell'istanza, i simboli che non risultano visibili in una dichiarazione di modello possono essere visibile al momento della creazione dell'istanza e partecipa alla risoluzione dell'overload. Questo può causare i modelli che modificano il comportamento basato sul codice che non era visibile quando il modello è stato definito, contrariamente a standard.

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

Quando viene compilato in **/Zc:twoPhase-**, il programma stampa "viene risolta la chiamata a int". In modalità di conformità sotto **/PERMISSIVE--**, il programma stampa "la chiamata restituisce void *", poiché il secondo overload di `func` non è visibile quando il compilatore rileva il modello.

*I nomi dei dipendenti*, i nomi che dipendono da un parametro di modello, hanno il comportamento di ricerca che è anche diverso sotto **/Zc:twoPhase-**. In modalità di conformità, i nomi dei dipendenti non sono associati al momento della definizione del modello. Al contrario, questi nomi vengono ricercati quando viene creata un'istanza di modello. Per le chiamate di funzione con un nome di funzione dipendente, il nome è associato al set di funzioni che sono visibili al momento della chiamata nella definizione del modello, come illustrato in precedenza. Gli overload aggiuntivi dalla ricerca dipendente dall'argomento vengono aggiunti sia il punto della definizione del modello che il punto di in cui viene creata un'istanza del modello. Le due fasi di ricerca in due fasi sono la ricerca per i nomi non dipendente al momento della definizione di modello e ricerca per i nomi dei dipendenti al momento della creazione di istanze di modello. Sotto **/Zc:twoPhase-**, il compilatore non esegue ricerca dipendente dall'argomento separatamente dalla ricerca normale, non qualificati (vale a dire, non esegue la ricerca in due fasi), in modo che i risultati della risoluzione dell'overload potrebbero essere diversi.

Ecco un altro esempio:

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

Quando viene compilato senza **/Zc:twoPhase-**, in questo modo viene

```Output
func(long)
NS::func(NS::S)
```

Quando viene compilato con **/Zc:twoPhase-**, in questo modo viene

```Output
func(int)
NS::func(NS::S)
```

In modalità di conformità in **/PERMISSIVE--**, la chiamata `tfunc(1729)` viene risolto il `void func(long)` esegue l'overload, non `void func(int)` overload nei **/Zc:twoPhase-**, in quanto il non qualificato `func(int)` dichiarato dopo la definizione del modello e non vengono trovati tramite ricerca dipendente dall'argomento. Ma `void func(S)` fanno parte di ricerca dipendente dall'argomento, viene aggiunto all'overload impostato per la chiamata `tfunc(s)` anche se è dichiarato come dopo la funzione di modello.

### <a name="update-your-code-for-two-phase-conformance"></a>Aggiornare il codice per verificare la conformità in due fasi

Le versioni precedenti del compilatore non richiedono le parole chiave `template` e `typename` ovunque lo Standard C++ richiede loro. Queste parole chiave sono necessarie in alcune posizioni per evitare ambiguità nel modo in cui i compilatori devono analizzare un nome di dipendente durante la prima fase di ricerca. Ad esempio:

`T::Foo<a || b>(c);`

Analizza un compilatore conforme `Foo` come variabile nell'ambito del `T`, vale a dire il codice è un operatore logico- o un'espressione con `T::foo < a` come operando di sinistra e `b > (c)` come operando di destra. Se si intende usare `Foo` come modello di funzione, è necessario indicare che questo è un modello aggiungendo il `template` (parola chiave):

`T::template Foo<a || b>(c);`

Nelle versioni precedenti a Visual Studio 2017 versione 15.3 e il momento **/Zc:twoPhase-** è specificato, il compilatore consente questo codice senza il `template` parola chiave 0}e lo interpreta come una chiamata a un modello di funzione con un argomento `a || b`, e analizza i modelli in modo molto limitato. Il codice precedente non viene analizzato affatto nella prima fase. Durante la seconda fase si verifica un contesto sufficiente per indicare che `T::Foo` è un modello anziché una variabile in modo che il compilatore non applica la parola chiave.

Questo comportamento può essere visualizzato anche eliminando la parola chiave `typename` prima dei nomi dei corpi di funzione modello, gli inizializzatori, gli argomenti predefiniti e gli argomenti di noexcept. Ad esempio:

```cpp
template<typename T>
typename T::TYPE func(typename T::TYPE*)
{
    /* typename */ T::TYPE i;
}
```

Se non si usa la parola chiave `typename` nel corpo della funzione, questo codice viene compilato in **/Zc:twoPhase-**, ma non si trova **/PERMISSIVE--**. Il `typename` parola chiave è obbligatorio per indicare che il `TYPE` è dipendente. Poiché il corpo non viene riconvertito sotto **/Zc:twoPhase-**, il compilatore does't richiedono la parola chiave. Nelle **/PERMISSIVE--** modalità di conformità, il codice senza il `typename` (parola chiave) genera errori. Per la migrazione del codice in Visual Studio 2017 versione 15.3 e versioni successive, inserire il `typename` parola chiave in cui è manca.

Analogamente, prendere in considerazione questo esempio di codice:

```cpp
template<typename T>
typename T::template X<T>::TYPE func(typename T::TYPE)
{
    typename T::/* template */ X<T>::TYPE i;
}
```

Sotto **/Zc:twoPhase-** e nei compilatori precedenti, il compilatore richiede solo la `template` (parola chiave) nella riga 2. Per impostazione predefinita e in modalità di conformità, il compilatore ora richiede anche il `template` parola chiave nella riga 4 per indicare che `T::X<T>` è un modello. Cercare il codice che manca la parola chiave e specificare in modo da rendere il codice è conforme allo standard.

Per altre informazioni sui problemi di conformità, vedere [miglioramenti della conformità C++ in Visual Studio](../../cpp-conformance-improvements-2017.md) e [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:twoPhase-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
