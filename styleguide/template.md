# <a name="metadata-and-markdown-template"></a>Modello Markdown e metadati

Il modello di core-docs contiene esempi di sintassi di Markdown, nonché indicazioni su come impostare i metadati. Per esaminarne la maggior parte, è necessario visualizzare sia il [Markdown non elaborato](https://raw.githubusercontent.com/dotnet/docs/master/styleguide/template.md) che la [visualizzazione sottoposta a rendering](https://github.com/dotnet/docs/blob/master/styleguide/template.md) (ad esempio, il Markdown non elaborato mostra il blocco dei metadati, che non è visibile nella visualizzazione sottoposta a rendering).

Quando si crea un file Markdown, è necessario copiare il modello in un nuovo file, compilare i metadati come specificato di seguito, impostare l'intestazione H1 sopra il titolo dell'articolo ed eliminare il contenuto.

## <a name="metadata"></a>Metadati

Il blocco di metadati completo è nella parte superiore (in formato [Markdown non elaborato](https://raw.githubusercontent.com/dotnet/docs/master/styleguide/template.md)), suddiviso in campi obbligatori e facoltativi. Alcune note importanti:

- È **necessario** includere uno spazio tra i due punti (:) e il valore di un elemento di metadati.
- Se un elemento di metadati facoltativo non ha un valore, impostare l'elemento come commento con un simbolo # o rimuovere l'elemento (non lasciarlo vuoto o usare "na"). Se si aggiunge un valore a un elemento che è stato impostato come commento, assicurarsi di rimuovere il simbolo #.
- La presenza dei due punti in un valore (ad esempio, un titolo) causa l'interruzione del parser dei metadati. In questo caso, racchiudere il titolo tra virgolette doppie (ad esempio, `title: "Writing .NET Core console apps: An advanced step-by-step guide"`).
- **title**: questo titolo verrà visualizzato nei risultati dei motori di ricerca. È inoltre possibile aggiungere una barra verticale (|) seguita dal nome del prodotto (ad esempio, `title: Developing Libraries with Cross Platform Tools | .NET Core`). Il titolo non deve essere identico al titolo nell'intestazione H1 e può contenere al massimo 65 caratteri (incluso | NOME DEL PRODOTTO).
- **author**, **manager**, **ms.reviewer**: il campo dell'autore deve contenere il **nome utente GitHub** dell'autore, non il relativo alias.  I campi "manager" e "ms.reviewer", invece, devono contenere gli alias Microsoft. ms.reviewer specifica il nome del project manager/sviluppatore associato all'articolo o alla funzionalità.
- **ms.devlang** definisce la tecnologia. Alcuni dei valori supportati sono: `dotnet`, `cpp`, `csharp`, `fsharp`, `vb` e `xml`.
- **ms.assetid**: si tratta del GUID dell'articolo che viene usato per scopi di registrazione interna, ad esempio attività di Business Intelligence (BI). Quando si crea un nuovo file markdown, è possibile ottenere un GUID dal [generatore di GUID Online](https://www.guidgenerator.com/).

## <a name="basic-markdown-gfm-and-special-characters"></a>Markdown di base, GFM e caratteri speciali

Sono supportati sia Markdown di base che GitHub Flavored Markdown (GFM). Per altre informazioni su questi elementi, vedere:

- [Sintassi Markdown di base](https://daringfireball.net/projects/markdown/syntax)
- [Documentazione di GFM](https://guides.github.com/features/mastering-markdown)

Markdown usa caratteri speciali, ad esempio \*, \` e \#, per la formattazione. Se si vuole includere uno di questi caratteri nel contenuto, è necessario eseguire una delle seguenti operazioni:

- Inserire una barra rovesciata prima del carattere speciale come "escape" (ad esempio, `\*` per \*)
- Usare il [codice entità HTML](https://www.ascii.cl/htmlcodes.htm) per il carattere (ad esempio, `&#42;` per &#42;).

## <a name="markdown-editing-tools"></a>Strumenti per la modifica del Markdown

È possibile usare [Visual Studio Code](https://code.visualstudio.com/) per modificare i documenti Markdown. VS Code include molte estensioni utili per Markdown, ad esempio:

- [docs markdown](https://marketplace.visualstudio.com/items?itemName=docsmsft.docs-markdown) da Microsoft
- [markdownlint](https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint)

## <a name="file-name"></a>Nome file

Per i nomi di file vengono usate le regole seguenti:

- Devono contenere solo lettere minuscole, numeri e trattini.
- Non possono contenere spazi o caratteri di punteggiatura. Usare i trattini per separare le parole e i numeri nel nome del file.
- Usare verbi di azione specifici, ad esempio sviluppare, acquistare, compilare, risolvere i problemi. Evitare i sostantivi.
- Non includere parole brevi, come un, e, il, in, o e così via.
- Usare il formato Markdown e l'estensione di file md.
- Mantenere i nomi di file relativamente brevi. Fanno parte dell'URL degli articoli.  

## <a name="headings"></a>Intestazioni

Usare l'iniziale maiuscola solo per la prima parola. Scrivere sempre in maiuscolo:

- La prima parola di un'intestazione.
- La parola che segue i due punti in un titolo o un'intestazione (ad esempio, "Procedura: Ordinare una matrice").

È necessario creare le intestazioni in stile atx, ovvero usare 1-6 simboli di cancelletto (#) all'inizio della riga per indicare un'intestazione, corrispondenti ai livelli delle intestazioni HTML da H1 a H6. Alcuni esempi di intestazioni di primo e secondo livello sono stati usati in precedenza.

Nell'argomento **deve** essere presente una sola intestazione di primo livello (H1), che verrà visualizzata come titolo della pagina.

Se l'intestazione termina con un carattere `#`, è necessario aggiungere un ulteriore carattere `#` alla fine per garantire che il rendering del titolo venga eseguito correttamente. Ad esempio `# Async Programming in F# #`.

Deve esserci sempre una riga vuota prima e dopo un'intestazione (ad eccezione delle intestazioni di primo livello).

Le intestazioni di secondo livello verranno usate per generare il sommario della pagina, visualizzato nella sezione "Contenuto dell'articolo" sotto il titolo della pagina.

```markdown
### Third-level heading

#### Fourth-level heading

##### Fifth level heading

###### Sixth-level heading
```

## <a name="text-styling"></a>Stile del testo

*Corsivo*  
Usare questo stile per i nomi di file, le cartelle e i percorsi generati dall'utente (disporre gli elementi lunghi su una riga separata), nuovi termini, nomi di parametri, valori immessi dall'utente e URL (a meno che non ne venga eseguito il rendering come collegamenti, ovvero l'impostazione predefinita).

**Grassetto**  
Usare questo stile per gli elementi dell'interfaccia utente e parole chiave del linguaggio.

## <a name="links"></a>Collegamenti

### <a name="internal-links"></a>Collegamenti interni

Per creare un collegamento a un'intestazione nello stesso file Markdown (anche denominato collegamento di ancoraggio), è necessario individuare l'ID dell'intestazione da collegare. Per verificare l'ID, visualizzare l'origine dell'articolo sottoposto a rendering, trovare l'ID dell'intestazione (ad esempio, `id="blockquote"`) e specificare il collegamento usando il simbolo # e l'ID (ad esempio, `#blockquote`).
L'ID viene generato automaticamente in base al testo dell'intestazione. Ad esempio, per una sezione univoca denominata `## Step 2`, l'ID sarà simile a `id="step-2"`.

- Esempio: [Capitolo 1](#chapter-1)

Per creare un collegamento a un file Markdown nello stesso repository, usare [collegamenti relativi](https://www.w3.org/TR/WD-html40-970917/htmlweb.html#h-5.1.2), includendo "md" alla fine del nome del file.

- Esempio: [File Leggimi](../readme.md)
- Esempio: [Introduzione a .NET](../docs/welcome.md)

Per creare un collegamento a un'intestazione in un file Markdown nello stesso repository, usare il collegamento relativo e il collegamento con hashtag.

- Esempio: [Community ASP.NET](../docs/welcome.md#community)

### <a name="docs-links"></a>Collegamenti per Docs

Per aggiungere un collegamento a un file in un diverso repository Docs, usare l'URL relativo docs.microsoft.com come collegamento. Non includere il suffisso .md.

- Esempio: [Documentazione della piattaforma UWP (Universal Windows Platform)](/windows/uwp)

### <a name="external-links"></a>Collegamenti esterni

Per creare un collegamento a un file esterno, usare l'URL completo come collegamento. Usare l'URL HTTPS, se applicabile.

- Esempio: [GitHub](https://www.github.com)

Se un file Markdown contiene un URL, questo verrà trasformato in un collegamento ipertestuale.

- Esempio: https://www.github.com

### <a name="links-to-apis"></a>Collegamenti ad API

Il sistema di compilazione dispone di alcune estensioni che consentono di collegare API di .NET Core senza che sia necessario usare collegamenti esterni.  
Quando si crea un collegamento a un'API, è possibile usare il relativo identificatore univoco (UID), che viene generato automaticamente dal codice sorgente.

È possibile usare una delle sintassi seguenti:

1. Collegamento Markdown:`[link_text](xref:UID)`
2. Collegamento automatico: `<xref:UID>`
3. Sintassi abbreviata: `@UID`

- Esempio: `@System.String`
- Esempio: `[String class](xref:System.String)`

Per altre informazioni sull'uso di questa notazione, vedere la pagina relativa all'[uso di riferimenti incrociati](https://dotnet.github.io/docfx/tutorial/links_and_cross_references.html#using-cross-reference).

> Attualmente, non è facile individuare l'UID. Il modo migliore per trovare l'UID per un'API è cercarlo in questo repository: [docascode/coreapi](https://github.com/docascode/coreapi). È in corso lo sviluppo di un sistema più efficiente, che sarà disponibile in futuro.

Quando l'UID contiene i caratteri speciali \` o \#, il valore UID deve essere codificato in formato HTML, come %60 e %23, rispettivamente, negli esempi seguenti:
- Esempio: @System.Threading.Tasks.Task\`1 diventa `@System.Threading.Tasks.Task%601`
- Esempio: @System.Exception\# diventa `@System.Exception.%23ctor`

## <a name="lists"></a>Elenchi

Gli elenchi dovrebbero essere circondati da righe vuote.

### <a name="ordered-lists"></a>Elenchi ordinati

1. This
1. È
1. Un
1. Ordered
1. Elenco

#### <a name="ordered-list-with-an-embedded-list"></a>Elenco ordinato con un elenco incorporato

1. Questo
1. è
1. any
1. incorporato
    1. Miss Scarlett
    1. Professor Plum
1. ordered
1. list

### <a name="unordered-lists"></a>Elenchi non ordinati

- This
- is
- a
- puntato
- list

#### <a name="unordered-list-with-an-embedded-list"></a>Elenco non ordinato con un elenco incorporato

- This
- puntato
- list
    - Signora Pavone
    - Dottor Verde
- contiene  
- altro
    1. Colonnello Mustard
    1. Signora Bianchi
- elenchi

## <a name="horizontal-rule"></a>Righello orizzontale

___

## <a name="tables"></a>Tabelle

| Tabelle        | Sono           | Comode  |
| ------------- |:-------------:| -----:|
| col 3 è      | allineata a destra | $1600 |
| col 2 è      | centrata      |   $12 |
| col 1 è predefinita | allineata a sinistra     |    $1 |

Per creare le tabelle più facilmente, è possibile usare uno [strumento generatore di tabelle Markdown](https://www.tablesgenerator.com/markdown_tables). Vedere anche [Strumenti per la modifica del Markdown](#markdown-editing-tools).

## <a name="code"></a>Codice

Il modo migliore per includere codice consiste nell'includere frammenti di codice da un esempio funzionante. Creare l'esempio seguendo le istruzioni nella [guida alla creazione di contributi](../CONTRIBUTING.md#contributing-to-samples).

È possibile includere il codice usando la sintassi di inclusione:

```markdown
[!code-csharp[<title>](<pathToFile>#<RegionName)]
```

L'esempio precedente mostra la sintassi C#, ma sono supportati anche altri linguaggi.
Usare `code-fsharp` per esempi relativi a F# e `code-vbnet` per esempi relativi a Visual Basic.
Gli altri linguaggi supportati sono:

- C++: `code-cpp`
- HTML: `code-html`
- JavaScript: `code-javascript`
- PowerShell: `code-ps`
- SQL: `code-sql`
- XML: `code-xml`

Il testo inserito per `<title>` viene visualizzato come rollover sul testo. `<pathToFile>` è il percorso del file di origine. `<RegionName>` deve essere un'area nel codice sorgente che deve essere inclusa. Usare la sintassi del preprocessore `#region` e `#endregion` per specificare l'area di codice da includere.

Per i casi in cui le aree non sono funzionanti, è possibile specificare l'inizio e fine di un frammento di codice usando un nome di elemento XML in un commento a riga singola. Ad esempio, è possibile scrivere questo codice in C#:

```csharp
// <CodeToInclude>
int j = 5;
int i ; 10;
int sum = i + j;
// </CodeToInclude>
```

In altri linguaggi, usare la sintassi di commento per lo specifico linguaggio.

È infine possibile usare i numeri di riga: `#L1-L10` includerà le righe da 1 a 10. L'uso dei numeri di riga è sconsigliato perché sono molto fragili.

L'inclusione di frammenti di codice da programmi completi assicura che tutto il codice venga eseguito tramite il sistema di Integrazione continua. Se tuttavia è necessario mostrare un elemento che causa errori di runtime o in fase di compilazione, è possibile usare i blocchi di codice inline.

### <a name="inline-code-blocks-with-language-identifier"></a>Blocchi di codice inline con identificatore del linguaggio

Usare tre apici (\`\`\`) e un ID di linguaggio per applicare il codice a colori di uno specifico linguaggio a un blocco di codice. Ecco l'elenco completo degli [ID di linguaggio GFM](https://github.com/jmm/gfm-lang-ids/wiki/GitHub-Flavored-Markdown-(GFM)-language-IDs).

#### <a name="c"></a>C\#

```csharp
using System;
namespace HelloWorld
{
    class Hello
    {
        static void Main() 
        {
            Console.WriteLine("Hello World!");

            // Keep the console window open in debug mode.
            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();
        }
    }
}
```

#### <a name="python"></a>Python

```python
friends = ['john', 'pat', 'gary', 'michael']
for i, name in enumerate(friends):
    print "iteration {iteration} is {name}".format(iteration=i, name=name)
```

#### <a name="powershell"></a>PowerShell

```powershell
Clear-Host
$Directory = "C:\Windows\"
$Files = Get-Childitem $Directory -recurse -Include *.log `
-ErrorAction SilentlyContinue
```

### <a name="generic-code-block"></a>Blocco di codice generico

Usare tre apici (&#96;&#96;&#96;) per la codifica di un blocco di codice generico.

> L'approccio consigliato è usare blocchi di codice con identificatori di linguaggio, come illustrato nella sezione precedente, per garantire la corretta evidenziazione della sintassi nel sito della documentazione. Usare blocchi di codice generico solo quando necessario.

```javascript
function fancyAlert(arg) {
    if(arg) {
        $.docs({div:'#foo'})
    }
}
```

### <a name="inline-code"></a>Codice inline

Usare apici (&#96;) per `inline code`. Usare il codice inline per i comandi della riga di comando, i nomi di tabelle e colonne di database e le espressioni e i nomi di funzioni del linguaggio.

## <a name="blockquotes"></a>Citazioni di paragrafi

> La siccità si protraeva ormai da dieci milioni di anni, e il regno delle terribili lucertole era finito da molto tempo. Lì, sull'Equatore, nel continente che un giorno sarebbe stato chiamato Africa, la lotta per la vita aveva raggiunto un nuovo diapason di ferocia, e il vincitore ancora non si intravedeva. In quella terra sterile e arida soltanto le creature piccole o fulminee o feroci potevano prosperare, o appena sperare di sopravvivere.

## <a name="images"></a>Immagini

### <a name="static-image-or-animated-gif"></a>Immagine statica o GIF animata

![questo è il testo alternativo](../images/Logo_DotNet.png)

### <a name="linked-image"></a>Immagine collegata

[![testo alternativo per l'immagine collegata](../images/Logo_DotNet.png)](https://dot.net)

## <a name="videos"></a>Video

### <a name="channel-9"></a>Channel 9

[![Larry Osterman - Una delle sue interazioni con Bill Gates (in merito allo stack di rete DOS)](https://sec.ch9.ms/ch9/caf5/f8657a22-5b83-47a3-9748-4c1be9fecaf5/Larry-Osterman-His-one-interaction-with-Bill-Gate_960.jpg)
](https://channel9.msdn.com/Blogs/TheChannel9Team/Larry-Osterman-His-one-interaction-with-Bill-Gates-over-DOS-networking-stack)

### <a name="youtube"></a>YouTube

[![Su .NET 4/2/2016 - Scott Hunter](https://img.youtube.com/vi/g2a4W6Q7aRw/0.jpg)
](https://www.youtube.com/watch?v=g2a4W6Q7aRw)

## <a name="docsmicrosoft-extensions"></a>Estensioni docs.microsoft

docs.microsoft fornisce alcune estensioni aggiuntive a GitHub Flavored Markdown (GFM). 

### <a name="alerts"></a>Avvisi

È importante usare gli stili di avviso seguenti, in modo che ne venga eseguito il rendering con lo stile appropriato nel sito della documentazione. Il motore di rendering in GitHub, tuttavia, non li differenzia.

#### <a name="note"></a>Nota

> [!NOTE]
> Questa è una NOTA

#### <a name="warning"></a>Avviso

> [!WARNING]
> Questo è un AVVISO

#### <a name="tip"></a>Suggerimento

> [!TIP]
> Questo è un SUGGERIMENTO

#### <a name="important"></a>Importante

> [!IMPORTANT]
> Questo è IMPORTANTE

Il rendering sarà simile al seguente: ![Stili di avviso](../images/alerts.png)

### <a name="buttons"></a>Pulsanti

> [!div class="button"]
[collegamenti con pulsanti](../docs/core/index.md)

È possibile vedere un esempio di pulsanti in azione nella [documentazione di Intune](https://docs.microsoft.com/intune/get-started/choose-how-to-enroll-devices). 

### <a name="selectors"></a>Selettori

> [!div class="op_single_selector"]
- [macOS](../docs/core/tutorials/using-on-macos.md)
- [Windows](../docs/core/tutorials/using-on-windows.md)

È possibile vedere un esempio di selettori in azione nella [documentazione di Intune](https://docs.microsoft.com/intune/deploy-use/what-to-tell-your-end-users-about-using-microsoft-intune#how-your-end-users-get-their-apps).

### <a name="step-by-steps"></a>Procedure dettagliate

>[!div class="step-by-step"]
[Indietro](../docs/csharp/expression-trees-interpreting.md)
[Avanti](../docs/csharp/expression-trees-translating.md)

È possibile vedere un esempio di procedure dettagliate in azione nella [documentazione di Advanced Threat Analytics](https://docs.microsoft.com/advanced-threat-analytics/deploy-use/install-ata-step2).
