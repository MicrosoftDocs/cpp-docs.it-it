---
title: "Sviluppo avanzato di controlli della casella degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Casella degli strumenti [Visual Studio SDK], aggiunta di elementi con MPF"
ms.assetid: d22479a8-6d95-400c-a115-f46d10c10d2f
caps.latest.revision: 19
caps.handback.revision: 19
manager: "douge"
---
# Sviluppo avanzato di controlli della casella degli strumenti
> [!NOTE]
>  La modalità consigliata per aggiungere i controlli personalizzati alla casella degli strumenti è di utilizzare i modelli di controllo della casella degli strumenti provenienti da Visual Studio 10 SDK.  In questo argomento viene mantenuto per compatibilità con le versioni precedenti, per l'aggiunta dei controlli esistenti alla casella degli strumenti e per lo sviluppo avanzate del controllo della casella degli strumenti.  
>   
>  Per ulteriori informazioni sulla creazione dei controlli della casella degli strumenti mediante i modelli, vedere [Procedura: Creare un controllo della casella degli strumenti che usa Windows Form](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) e [Creazione di un controllo casella degli strumenti WPF](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 Un VSPackage basato su managed package Framework possibile estendere la funzionalità della casella degli strumenti di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] aggiunta di controlli, oggetti derivati dagli oggetti di <xref:System.Drawing.Design.ToolboxItem> .  Ogni <xref:System.Drawing.Design.ToolboxItem> viene implementata da un oggetto derivato da <xref:System.ComponentModel.Component>.  
  
## Provider VSPackage gli elementi della casella degli strumenti  
 Un VSPackage basato su managed package Framework necessario registrarsi come provider del controllo della casella degli strumenti con gli attributi di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] e gli eventi Casella degli strumenti\-correlati handle.  
  
#### Per configurare un VSPackage come provider dell'elemento della casella degli strumenti  
  
1.  Creare un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> applicato alla classe che implementa <xref:Microsoft.VisualStudio.Shell.Package>.  Di seguito è riportato un esempio:  
  
    ```vb#  
    Namespace Vsip.LoadToolboxMembers   
        <ProvideToolboxItems(14)> _   
        <DefaultRegistryRoot("Software\Microsoft\VisualStudio\8.0")> _   
        <InstalledProductRegistration(False, "#100", "#102", "1.0", IconResourceID := 400)> _   
        <ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)> _   
        <ProvideMenuResource(1000, 1)> _   
        <Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
        Public Class LoadToolboxMembers   
            Inherits Package   
        End Class   
    End Namespace  
    ```  
  
    ```c#  
    namespace Vsip.LoadToolboxMembers {  
        [ProvideToolboxItems(14)]  
        [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\8.0")]  
        [InstalledProductRegistration(false, "#100", "#102", "1.0", IconResourceID = 400)]  
        [ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)]  
        [ProvideMenuResource(1000, 1)]  
        [Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
        public class LoadToolboxMembers : Package {  
    ```  
  
    > [!NOTE]
    >  Il costruttore per <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> accetta un numero di versione Integer come argomento.  L'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizza questo numero di versione per determinare se un package VS che fornisce oggetti di <xref:System.Drawing.Design.ToolboxItem> deve essere ricaricatoe o se le informazioni memorizzate nella cache possono essere utilizzate dalla casella degli strumenti.  Per garantire ricaricare di un package VS quando forniscono <xref:System.Drawing.Design.ToolboxItem> in fase di sviluppo, incrementare sempre il numero di versione dopo qualsiasi modifica.  
  
2.  Se gli oggetti di <xref:System.Drawing.Design.ToolboxItem> forniscono i formati degli Appunti non standard della casella degli strumenti, un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> necessario applicare alla classe che implementa l'oggetto di <xref:Microsoft.VisualStudio.Shell.Package> per ogni formato degli Appunti supportato da <xref:System.Drawing.Design.ToolboxItem> oggetti che il package VS fornisce.  
  
     Per ulteriori informazioni sui formati degli Appunti supportati casella degli strumenti, vedere [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md).  
  
    > [!NOTE]
    >  Se un VSPackage indica che fornisce a qualsiasi <xref:System.Drawing.Design.ToolboxItem> oggetti con i formati degli Appunti non standard, l'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] si presuppone che solo i formati indicati dalle istanze di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> applicate all'implementazione della classe di<xref:Microsoft.VisualStudio.Shell.Package> di un package VS sono supportati dal package VS.  Se un VSPackage deve supportare i formati degli Appunti predefiniti nonché un formato non standard, è necessario applicare un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> per ogni formato predefinito nonché il formato non standard.  
  
3.  Se il package VS fornisce la configurazione dinamica di <xref:System.Drawing.Design.ToolboxItem>, è necessario:  
  
    1.  Applicare un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> ha costruito utilizzando <xref:System.Type> che il pacchetto viene utilizzato per implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> .  
  
    2.  Su un oggetto indipendente della classe di `public` da <xref:Microsoft.VisualStudio.Shell.Package>del package VS, il package VS deve implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> .  
  
         Un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> necessario applicare alla classe che implementa <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>, utilizzando una stringa contenente i criteri di selezione \(filtro\) come argomento al costruttore di istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> .  
  
 Per informazioni su come notificare all'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] che un VSPackage fornisce i controlli della casella degli strumenti, vedere [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md).  
  
 Per un esempio in e descritta come è possibile implementare il supporto di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> , vedere [Procedura dettagliata: Personalizzazione della configurazione dinamica degli elementi della casella degli strumenti](../misc/walkthrough-customizing-toolbox-item-configuration-dynamically.md).  
  
1.  Package VS che fornisce <xref:System.Drawing.Design.ToolboxItem> necessario gestire <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e gli eventi di <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> .  
  
    1.  implementare i gestori per gli eventi di <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> e di <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> :  
  
        ```vb#  
        Private Sub OnToolboxUpgraded(ByVal sender As Object, ByVal e As EventArgs)   
            OnToolboxInitialized(send, e)   
        End Sub   
        Private Sub OnToolboxInitialized(ByVal sender As Object, ByVal e As EventArgs)   
            'Make sure all toolbox items are added.   
        End Sub  
        ```  
  
        ```c#  
        private void OnToolboxUpgraded(object sender, EventArgs e) {  
            OnToolboxInitialized(send,e);  
        }  
        private void OnToolboxInitialized(object sender, EventArgs e) {  
            //Make sure all toolbox items are added.  
        }  
        ```  
  
    2.  Per sottoscrivere gli eventi di <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> e di <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> .  
  
         Questa operazione viene in genere effettuata nel metodo di <xref:Microsoft.VisualStudio.Shell.Package.Initialize%2A> dell'implementazione di <xref:Microsoft.VisualStudio.Shell.Package> :  
  
        ```vb#  
        Protected Overloads Overrides Sub Initialize()   
            AddHandler ToolboxInitialized, AddressOf OnToolboxInitialized   
            AddHandler ToolboxUpgraded, AddressOf OnToolboxUpgraded   
        End Sub  
        ```  
  
        ```c#  
        protected override void Initialize() {  
            ToolboxInitialized += new EventHandler(OnToolboxInitialized);  
            ToolboxUpgraded += new EventHandler(OnToolboxUpgraded);  
        }  
        ```  
  
     per un esempio di come implementare i gestori per <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e gli eventi di <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> , vedere [Procedura dettagliata: Caricamento automatico degli elementi della casella degli strumenti](../misc/walkthrough-autoloading-toolbox-items.md).  
  
## Creazione del controllo della casella degli strumenti  
 L'implementazione sottostante di un controllo casella degli strumenti deve essere derivata da <xref:System.ComponentModel.Component> ed essere incapsulato nell'oggetto predefinito o in un'implementazione derivata dell'oggetto di <xref:System.Drawing.Design.ToolboxItem> .  
  
 Il modo più semplice per fornire <xref:System.ComponentModel.Component>\- l'implementazione derivata dei controlli della casella degli strumenti è estendendo un oggetto derivato da <xref:System.Windows.Forms.Control>, in particolare, la classe di <xref:System.Windows.Forms.UserControl> .  
  
#### Per creare controlli della casella degli strumenti  
  
1.  Utilizzare il comando di **Aggiungi nuovo elemento** di Esplora Soluzioni per creare un oggetto della casella degli strumenti che implementa <xref:System.Windows.Forms.UserControl>.  
  
    ```vb#  
    Public Partial Class ToolboxControl1   
        Inherits UserControl   
        Public Sub New()   
            InitializeComponent()   
        End Sub   
        Private Sub button1_Click(ByVal sender As Object, ByVal e As EventArgs)   
            MsgBox("Hello world from" & Me.ToString())   
        End Sub   
  
        Private Sub ToolboxItem1_Load(ByVal sender As Object, ByVal e As EventArgs)   
  
        End Sub   
    End Class  
    ```  
  
    ```c#  
    public partial class ToolboxControl1 : UserControl {  
            public ToolboxControl1() {  
                InitializeComponent();  
            }  
  
            private void button1_Click(object sender, EventArgs e) {  
                MessageBox.Show("Hello world from" + this.ToString());  
            }  
  
            private void ToolboxItem1_Load(object sender, EventArgs e) {  
  
            }  
        }  
    ```  
  
     Per ulteriori informazioni sui controlli Windows Form di creazione e dei controlli della casella degli strumenti, vedere [Sviluppo di controlli Windows Form personalizzati con .NET Framework](../Topic/Developing%20Custom%20Windows%20Forms%20Controls%20with%20the%20.NET%20Framework.md) o [Procedura dettagliata: Caricamento automatico degli elementi della casella degli strumenti](../misc/walkthrough-autoloading-toolbox-items.md).  
  
2.  \(Facoltativo\) un'applicazione può scegliere di utilizzare un oggetto personalizzato derivato dall'oggetto di <xref:System.Drawing.Design.ToolboxItem> per fornire il controllo della casella degli strumenti a **Casella degli strumenti**.  
  
    > [!NOTE]
    >  Qualsiasi classe derivata dall'oggetto di <xref:System.Drawing.Design.ToolboxItem> devono disporre di un'istanza di <xref:System.SerializableAttribute> applicato a.  
  
     Un'implementazione personalizzata derivata da <xref:System.Drawing.Design.ToolboxItem> possibile estendere un'applicazione fornendo un maggiore controllo sul modo in cui i dati di <xref:System.Drawing.Design.ToolboxItem> sono serializzati, la gestione avanzata dei metadati della finestra di progettazione, il supporto per i formati degli Appunti non standard e la funzionalità che consente l'interazione degli utenti finali.  
  
     Nell'esempio, gli utenti sono richiesti da una finestra di dialogo selezionare le funzionalità:  
  
    ```vb#  
    <ToolboxItemAttribute(GetType(CustomControl))> _   
    <Serializable()> _   
    Class CustomControl   
        Inherits ToolboxItem   
  
        Public Sub New(ByVal type As Type)   
            MyBase.New(GetType(CustomControl))   
        End Sub   
        Public Sub New(ByVal type As Type, ByVal icon As Bitmap)   
            MyBase.New(GetType(SCustomControl))   
            Me.DisplayName = "CustomContorl"   
            Me.Bitmap = icon   
        End Sub   
  
        Private Sub New(ByVal info As SerializationInfo, ByVal context As StreamingContext)   
            Deserialize(info, context)   
        End Sub   
        Protected Overloads Overrides Function CreateComponentsCore(ByVal host As IDesignerHost) As IComponent()   
            Dim dialog As New CustomControlDialog(host)   
            Dim dialogResult__1 As DialogResult = dialog.ShowDialog()   
            If dialogResult__1 = DialogResult.OK Then   
                Dim component As IComponent = DirectCast(dialog.CustomInstance, IComponent)   
                Dim container As IContainer = host.Container   
                container.Add(component)   
                Return New IComponent() {component}   
            Else   
                Return New IComponent() {}   
            End If   
        End Function   
    End Class  
    ```  
  
    ```c#  
    [ToolboxItemAttribute(typeof(CustomControl))]  
    [Serializable]  
    class CustomControl : ToolboxItem {  
  
        public CustomControl(Type type) : base(typeof(CustomControl)) {}  
            public CustomControl(Type type, Bitmap icon) : base(typeof(SCustomControl)) {  
            this.DisplayName = "CustomContorl";  
            this.Bitmap = icon;  
        }  
  
        private CustomControl(SerializationInfo info, StreamingContext context) {  
            Deserialize(info, context);  
        }  
        protected override IComponent[] CreateComponentsCore(IDesignerHost host) {  
            CustomControlDialog dialog = new CustomControlDialog(host);  
            DialogResult dialogResult = dialog.ShowDialog();  
            if (dialogResult == DialogResult.OK) {  
                IComponent component = (IComponent)dialog.CustomInstance;  
                IContainer container = host.Container;  
                container.Add(component);  
                return new IComponent[] { component };  
            }  
            else {  
                return new IComponent[] {};  
            }  
        }  
    }  
    ```  
  
> [!NOTE]
>  È inoltre possibile per una classe derivata dall'oggetto di <xref:System.Drawing.Design.ToolboxItem> per fornire la propria implementazione autonoma del controllo sottostante.  Tale classe sarà quindi necessario creare manualmente e di fornire tutti i componenti sottostanti.  
  
## Aggiunta esplicita degli elementi della casella degli strumenti  
 Per aggiungere alla casella degli strumenti, un controllo deve essere contenuto in un'istanza di <xref:System.Drawing.Design.ToolboxItem> o di un oggetto derivato da <xref:System.Drawing.Design.ToolboxItem> e quindi aggiunto a **Casella degli strumenti** tramite l'interfaccia di <xref:System.Drawing.Design.IToolboxService> .  
  
#### Per incapsulare e aggiungere i controlli della casella degli strumenti  
  
1.  Incapsulare l'implementazione di <xref:System.ComponentModel.Component> in un'istanza di un oggetto di <xref:System.Drawing.Design.ToolboxItem> o <xref:System.Drawing.Design.ToolboxItem>oggetto derivato da chiamando il metodo di <xref:System.Drawing.Design.ToolboxItem.Initialize%2A> di tale oggetto con <xref:System.Type?displayProperty=fullName>del componente di implementazione:  
  
    ```vb#  
    Dim customItem As New ToolboxItem()   
    If customItem IsNot Nothing Then   
        customItem.Initialize(userControl)   
    End If  
    ```  
  
    ```c#  
    ToolboxItem customItem = new ToolboxItem() ;  
    if (customItem != null) {  
        customItem.Initialize(userControl);  
    }  
    ```  
  
     È un esempio di un oggetto `userControl` derivato da <xref:System.Windows.Forms.UserControl> \(un'istanza dell'oggetto di `ToolboxControl1` illustrato in precedenza\) utilizzato per costruire nuovo <xref:System.Drawing.Design.ToolboxItem>.  
  
    > [!NOTE]
    >  L'implementazione predefinita del costruttore di <xref:System.Drawing.Design.ToolboxItem> che accetta un argomento di <xref:System.Type?displayProperty=fullName> \(il costruttore di<xref:System.Drawing.Design.ToolboxItem.%23ctor%28System.Type%29> chiama il metodo di <xref:System.Drawing.Design.ToolboxItem.Initialize%2A> dell'oggetto di <xref:System.Drawing.Design.ToolboxItem> .  
  
2.  Utilizzare il servizio della casella degli strumenti \(<xref:System.Drawing.Design.IToolboxService>\) per aggiungere l'oggetto di <xref:System.Drawing.Design.ToolboxItem> costruito dall'implementazione sottostante del controllo.  
  
     Nell'esempio riportato di seguito, l'accesso al servizio della casella degli strumenti viene ottenuto, alcune delle proprietà dell'istanza `customItem` di <xref:System.Drawing.Design.ToolboxItem> sono impostate e quindi `customItem` aggiunto a **Casella degli strumenti**:  
  
    ```vb#  
    Dim toolboxService As IToolboxService = TryCast(GetService(GetType(IToolboxService)), IToolboxService)  
    customItem.Bitmap = New System.Drawing.Bitmap(ToolBoxControl1, "Control1.bmp")  
    customItem.DisplayName = "Custom Item"   
    toolboxService.AddToolboxItem(item, "Custom Tab")  
    ```  
  
    ```c#  
    IToolboxService toolboxService = GetService(typeof(IToolboxService)) as IToolboxService;  
    customItem.Bitmap = new System.Drawing.Bitmap(ToolboxControl1,"Control1.bmp");  
    customItem.DisplayName= "Custom Item";  
    toolboxService.AddToolboxItem(item, "Custom Tab");  
    ```  
  
## L'utilizzo della reflection per aggiungere i controlli della casella degli strumenti  
 Applicare attributi alla classe che implementa un controllo casella degli strumenti consente l'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o un'applicazione basata [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] utilizzare la reflection per rilevare automaticamente correttamente e aggiungere controlli a **Casella degli strumenti**.  
  
#### Per applicare reflection e attributi ai controlli della casella degli strumenti  
  
1.  Identificare tutti gli oggetti utilizzati i controlli della casella degli strumenti di utilizzo con le istanze di <xref:System.ComponentModel.ToolboxItemAttribute>.  
  
     Il tipo dell'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> a un oggetto l'oggetto determina se e come <xref:System.Drawing.Design.ToolboxItem> viene costruito da.  
  
    1.  Applicare un'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> ha costruito con un valore di `BOOLEAN` di `false` a un oggetto effettua che oggetto non disponibile nella casella degli strumenti tramite reflection.  
  
         Può essere utile per isolare un oggetto, ad esempio <xref:System.Windows.Forms.UserControl> da **Casella degli strumenti** durante lo sviluppo.  
  
    2.  Applicare un'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> ha costruito con un valore di `BOOLEAN` di `true` a un oggetto effettua che oggetto disponibile nella casella degli strumenti tramite reflection e richiede che l'oggetto è stato aggiunto alla casella degli strumenti mediante un oggetto predefinito di <xref:System.Drawing.Design.ToolboxItem> .  
  
    3.  Applicare un'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> ha costruito con <xref:System.Type> di un oggetto personalizzato derivato da <xref:System.Drawing.Design.ToolboxItem> rende disponibile l'oggetto di **Casella degli strumenti** tramite reflection e richiede che l'oggetto è stato aggiunto alla casella degli strumenti utilizzando questo oggetto personalizzato derivato da <xref:System.Drawing.Design.ToolboxItem>.  
  
2.  Specificare \(al meccanismo di reflection dell'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \) la bitmap da utilizzare per la visualizzazione del controllo della casella degli strumenti in **Casella degli strumenti** aggiunta di un'istanza di <xref:System.Drawing.ToolboxBitmapAttribute> all'implementazione del controllo della casella degli strumenti.  
  
3.  Se necessario, applicare le istanze di <xref:System.ComponentModel.ToolboxItemFilterAttribute> a oggetti di <xref:System.Drawing.Design.ToolboxItem> la reflection di utilizzo per identificarli statico per l'utilizzo con gli oggetti che dispongono di un attributo corrispondente.  
  
     Nell'esempio riportato di seguito, l'implementazione di un controllo casella degli strumenti dispone di un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> è stata applicata a, che rende disponibile il controllo in **Casella degli strumenti** solo quando il documento di lavoro corrente è finestre di progettazione di <xref:System.Windows.Forms.UserControl>  
  
    ```vb#  
    <ToolboxItemFilter(System.Windows.Forms.UserControl, ToolboxItemFilterType.Require)> _   
    <SerializableAttribute()> _   
    <GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")> _   
    Friend Class CustomToolboxItem   
        Inherits ToolboxItem   
    End Class  
    ```  
  
    ```c#  
    [ToolboxItemFilter(System.Windows.Forms.UserControl,ToolboxItemFilterType.Require)]  
    [SerializableAttribute()]  //ToolboxItem implementations much has this attribute.  
    [GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
    internal class CustomToolboxItem : ToolboxItem   
    ```  
  
 Esistono tre tecniche di base per l'utilizzo della reflection a <xref:System.Drawing.Design.ToolboxItem>autoloading.  
  
### Utilizzando la funzionalità di ToolService per recuperare i controlli della casella degli strumenti  
 <xref:System.Drawing.Design.ToolboxService> fornisce Vspackage con i metodi statici di <xref:System.Drawing.Design.ToolboxService.GetToolboxItems%2A> che utilizzano la reflection per analizzare gli assembly per tutti i tipi che supportano gli elementi della casella degli strumenti e restituiscono gli elementi per tali tipi.  Per essere restituito, un elemento della casella degli strumenti deve:  
  
-   Essere pubblico.  
  
-   implementare la classe di <xref:System.ComponentModel.IComponent> .  
  
-   Non essere astratto.  
  
-   Disporre <xref:System.ComponentModel.ToolboxItemAttribute> il relativo tipo.  
  
-   Non disporre <xref:System.ComponentModel.ToolboxItemAttribute> impostato su `false` il relativo tipo  
  
-   Non contenere parametri generici.  
  
##### Per ottenere questo elenco  
  
1.  Creare un'istanza di <xref:System.Reflection.Assembly> che fa riferimento all'assembly che deve essere digitalizzatoe per gli oggetti di <xref:System.Drawing.Design.ToolboxItem> .  
  
    > [!NOTE]
    >  per ottenere un'istanza di <xref:System.Reflection.Assembly> per l'assembly corrente, utilizzare il metodo statico <xref:System.Reflection.Assembly.GetExecutingAssembly%2A>.  
  
2.  Chiamare <xref:System.Drawing.Design.ToolboxService.GetToolboxItems%2A>, restituendo un oggetto di <xref:System.Collections.ICollection> contenente un elenco di oggetti appropriati.  
  
    > [!NOTE]
    >  Se un oggetto in <xref:System.Collections.ICollection> restituito dispone di un'istanza valida di <xref:System.Drawing.ToolboxBitmapAttribute> assegnato alla relativa implementazione di, il metodo di <xref:System.Drawing.Design.ToolboxService.GetToolboxItems%2A> imposterà la proprietà di <xref:System.Drawing.Design.ToolboxItem.Bitmap%2A> dell'oggetto di <xref:System.Drawing.Design.ToolboxItem> .  
  
3.  Utilizzare <xref:Microsoft.VisualStudio.Shell.Package.GetService%2A> per ottenere l'accesso a <xref:System.Drawing.Design.IToolboxService>e utilizzare il metodo di <xref:System.Drawing.Design.IToolboxService.AddToolboxItem%2A> per aggiungere elementi dall'oggetto restituito di <xref:System.Collections.ICollection> alla casella degli strumenti.  
  
     Il codice in eseguire una query l'applicazione in esecuzione e ottiene un elenco di tutti gli oggetti di <xref:System.Drawing.Design.ToolboxItem> e li viene caricato.  Per un esempio in e descritta questa operazione nel codice di esecuzione, vedere il metodo di `Initialization` in [Procedura dettagliata: Personalizzazione della configurazione dinamica degli elementi della casella degli strumenti](../misc/walkthrough-customizing-toolbox-item-configuration-dynamically.md).  
  
    ```vb#  
    Protected ToolboxItemList As ICollection = Nothing  
    ToolboxItemList = ToolboxService.GetToolboxItems(Assembly.GetExecutingAssembly(), "")  
    If ToolboxItemList Is Nothing Then   
        Throw New ApplicationException("Unable to generate a toolbox Items listing for " & [GetType]().FullName)   
    End If   
    Dim toolboxService As IToolboxService = TryCast(GetService(GetType(IToolboxService)), IToolboxService)   
    For Each itemFromList As ToolboxItem In ToolboxItemList   
        toolboxService.AddToolboxItem(itemFromList, CategoryTab)   
    Next  
    ```  
  
    ```c#  
    protected ICollection ToolboxItemList = null;  
    ToolboxItemList = ToolboxService.GetToolboxItems(Assembly.GetExecutingAssembly(), "");  
    if (ToolboxItemList == null){  
        throw new ApplicationException("Unable to generate a toolbox Items listing for "  
    + GetType().FullName);  
    }  
    IToolboxService toolboxService = GetService(typeof(IToolboxService)) as IToolboxService;  
    foreach (ToolboxItem itemFromList in ToolboxItemList){  
        toolboxService.AddToolboxItem(itemFromList, CategoryTab);  
    }  
    ```  
  
### Utilizzo delle risorse incorporate testo nei controlli della casella degli strumenti di carico automatico  
 Una risorsa di testo in un assembly contenente un elenco formattato dei controlli della casella degli strumenti può essere utilizzata da <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> per caricare automaticamente un controllo casella degli strumenti se correttamente formattato.  
  
 Una risorsa di testo che contiene un elenco di oggetti al caricamento deve essere disponibile in un assembly accessibile al package VS.  
  
##### Per aggiungere e rendere disponibile una risorsa del testo all'assembly  
  
1.  In **Esplora soluzioni**, fare clic con il pulsante destro del mouse sul progetto.  
  
2.  Il punto a **aggiungere**, quindi **nuovo elemento**.  
  
3.  Nella finestra di dialogo di **Aggiungi nuovo elemento** , **file di testo** selezionato e fornisce un nome.  
  
4.  In **Esplora soluzioni**, fare clic con il pulsante destro del mouse sul file di testo appena creata e impostare la proprietà di **operazione di compilazione** alla risorsa incorporata.  
  
     Le voci per il controllo di **Casella degli strumenti** vengano caricate devono contenere il nome della classe di implementazione, il nome dell'assembly che la contiene.  
  
     Per informazioni sul formato delle voci dei controlli della casella degli strumenti alla risorsa incorporata di testo, vedere la pagina di riferimento di <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> .  
  
5.  Impostare il percorso di ricerca dei file che contengono gli assembly che ospitano gli oggetti del controllo della casella degli strumenti.  
  
     <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A>, directory di ricerca solo specificate nella voce del Registro di sistema HKEY\_CURRENT\_USER \\Software\\Microsoft\\VisualStudio \\ *\<versione\>* \\AssemblyFolders, dove  *\<versione\>*  è il numero di versione della versione di Visual Studio, ad esempio 8,0.  
  
    > [!NOTE]
    >  Il percorso radice HKEY\_LOCAL\_MACHINE \\SOFTWARE\\Microsoft\\VisualStudio \\ *\<versione\>*  è possibile eseguire l'override con alternanza la radice quando la shell di Visual Studio viene inizializzato, o l'utilizzo di <xref:Microsoft.VisualStudio.Shell.DefaultRegistryRootAttribute>.  Per ulteriori informazioni, vedere [Opzioni della riga di comando](../Topic/Command-Line%20Switches%20\(Visual%20Studio%20SDK\).md).  
  
     Per informazioni dettagliate sul formato corretto delle voci del Registro di sistema di AssemblyFolder, vedere la pagina di riferimento di <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> .  
  
6.  Ottenere un'istanza di <xref:System.IO.TextReader.Synchronized%2A> che accedono alla risorsa incorporata di testo e, se il supporto di localizzazione è necessario per i nomi di categoria, un'istanza di <xref:System.Resources.ResourceManager>e utilizza questi per richiamare il metodo di <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> .  
  
    ```vb#  
    Dim rm As New ResourceManager("TbxCategories", Assembly.GetExecutingAssembly())  
    Dim toolboxStream As Stream = TbxItemProvider.[GetType]().Assembly.GetManifestResourceStream("ToolboxItems.txt")  
    If toolboxStream IsNot Nothing Then   
        Using reader As TextReader = New StreamReader(toolboxStream)   
            ParseToolboxResource(reader, rm)   
        End Using   
    End If  
    ```  
  
    ```c#  
    ResourceManager rm = new ResourceManager("TbxCategories", Assembly.GetExecutingAssembly());  
    Stream toolboxStream = TbxItemProvider.GetType().Assembly.GetManifestResourceStream("ToolboxItems.txt");  
    if (toolboxStream != null) {  
        using (TextReader reader = new StreamReader(toolboxStream)) {  
        ParseToolboxResource(reader, rm);  
    }  
    }  
    ```  
  
     Nell'esempio precedente, un elenco contenuto in una risorsa incorporata di testoassembly che contiene la classe `TbxItemProvider` viene passato a <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> con le risorse di tipo stringa di `TbxCategories` .  
  
     Il metodo trova tutti i file che contengono gli assembly nelle directory specificate nella voce del Registro di sistema di AssemblyFolders i controlli della casella degli strumenti riportati nella risorsa e li verrà caricato.  
  
    > [!NOTE]
    >  Se un controllo casella degli strumenti trovato da <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> dispone di un'istanza valida di <xref:System.Drawing.ToolboxBitmapAttribute> assegnato alla relativa implementazione di, <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> imposterà la bitmap utilizzato per visualizzare il controllo della casella degli strumenti.  
  
### In modo esplicito mediante reflection ai controlli della casella degli strumenti di carico automatico  
 Se è necessario in modo esplicito da eseguire una query sugli assembly per informazioni sui controlli di **Casella degli strumenti** contengono, anziché delegando l'attività <xref:System.Drawing.Design.ToolboxService.GetToolboxItems%2A>, tale operazione.  
  
##### Per utilizzare in modo esplicito reflection ai controlli della casella degli strumenti di carico automatico  
  
1.  Creare un'istanza di <xref:System.Reflection.Assembly>, facendo riferimento a ogni assembly che deve essere digitalizzatoe per gli oggetti di <xref:System.Drawing.Design.ToolboxItem> .  
  
    > [!NOTE]
    >  per ottenere un'istanza di <xref:System.Reflection.Assembly> per l'assembly corrente, utilizzare il metodo statico <xref:System.Reflection.Assembly.GetExecutingAssembly%2A>.  
  
2.  Per ogni assembly siano digitalizzati, utilizzare il metodo di <xref:System.Reflection.Assembly.GetTypes%2A> dell'oggetto di <xref:System.Reflection.Assembly> per ottenere un elenco di ogni <xref:System.Type?displayProperty=fullName> nell'assembly.  
  
3.  Verificare che il tipo non è astratto e non supporti l'interfaccia di <xref:System.ComponentModel.IComponent> \(tutte le implementazioni dei controlli della casella degli strumenti utilizzati per creare un'istanza di un oggetto di <xref:System.Drawing.Design.ToolboxItem> devono implementare questa interfaccia\).  
  
4.  Ottenere gli attributi di <xref:System.Type> e utilizzare queste informazioni per stabilire se il package VS desidera caricare l'oggetto.  
  
    > [!NOTE]
    >  Sebbene oggetto principal che è possibile creare un oggetto di <xref:System.Drawing.Design.ToolboxItem> da un'implementazione dell'interfaccia di <xref:System.ComponentModel.IComponent> senza un'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> non impostata su `false` viene applicata a, non è consigliabile farlo.  
  
5.  Utilizzare <xref:System.Type.GetConstructor%2A> per ottenere i costruttori per <xref:System.Drawing.Design.ToolboxItem> oggetti che i controlli della casella degli strumenti richiedono.  
  
6.  Creare gli oggetti di <xref:System.Drawing.Design.ToolboxItem> e aggiungerli a **Casella degli strumenti**.  
  
 Per un esempio illustrare l'utilizzo esplicito di reflection verificarsi e dei controlli della casella degli strumenti di carico automatico, vedere `CreateItemList` descritto in [Procedura dettagliata: Caricamento automatico degli elementi della casella degli strumenti](../misc/walkthrough-autoloading-toolbox-items.md).  
  
## Configurazione del controllo della casella degli strumenti aggiuntiva  
 Un VSPackage possibile utilizzare il controllo su quando e come un controllo casella degli strumenti visualizzati in **Casella degli strumenti**, con l'implementazione di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>e utilizzo di <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute>e <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute>.  
  
 Applicare le istanze di <xref:System.ComponentModel.ToolboxItemFilterAttribute> a una classe fornisce solo il controllo statico su quando e come un controllo di **Casella degli strumenti** è disponibile.  
  
#### Per creare il supporto dinamico di configurazione ai controlli della casella degli strumenti  
  
1.  Classe del costrutto che implementa l'interfaccia di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> come parte di un VSPackage.  
  
    > [!NOTE]
    >  L'interfaccia di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> non deve essere implementata nella stessa classe che fornisce l'implementazione di un package VS di <xref:Microsoft.VisualStudio.Shell.Package>.  
  
2.  Associare l'implementazione di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> con gli oggetti in assembly specifici applicando un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> su.  
  
     Nell'esempio riportato di seguito viene illustrata una configurazione dinamica per gli assembly dell'oggetto del controllo della casella degli strumenti nello spazio dei nomi e della richiesta di `Vsip.*` gli oggetti alcuni di <xref:System.Drawing.Design.ToolboxItem> sono visibili solo nelle finestre di progettazione in base a <xref:System.Windows.Forms.UserControl>e altro mai visibile con le finestre di progettazione in base a <xref:System.Windows.Forms.UserControl>.  
  
    ```vb#  
    <ProvideAssemblyFilterAttribute("Vsip.*, Version=*, Culture=*, PublicKeyToken=*")> _   
    <GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")> _   
    Public NotInheritable Class ToolboxConfig   
        Implements IConfigureToolboxItem   
        Public Sub New()   
        End Sub  
  
        ''' <summary>   
        ''' Adds extra configuration information to this toolbox item.   
        ''' </summary>   
        Public Sub ConfigureToolboxItem(ByVal item As ToolboxItem)   
            If item Is Nothing Then   
                Exit Sub   
            End If   
  
            'hide from .NET Compact Framework on the device designer.   
            Dim newFilter As ToolboxItemFilterAttribute = Nothing   
            If item.TypeName = GetType(ToolboxControl1).ToString() Then   
                newFilter = New ToolboxItemFilterAttribute("System.Windows.Forms.UserControl", ToolboxItemFilterType.Require)   
            ElseIf item.TypeName = GetType(ToolboxControl2).ToString() Then   
  
                newFilter = New ToolboxItemFilterAttribute("System.Windows.Forms.UserControl", ToolboxItemFilterType.Prevent)   
            End If   
            If newFilter IsNot Nothing Then   
                Dim array As New ArrayList()   
                array.Add(newFilter)   
                item.Filter = DirectCast(array.ToArray(GetType(ToolboxItemFilterAttribute)), ToolboxItemFilterAttribute())   
            End If   
        End Sub   
    End Class  
    ```  
  
    ```c#  
    [ProvideAssemblyFilterAttribute("Vsip.*, Version=*, Culture=*, PublicKeyToken=*")]  
        [GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
        public sealed class ToolboxConfig : IConfigureToolboxItem {  
            public ToolboxConfig() {  
            }  
  
            /// <summary>  
            ///     Adds extra configuration information to this toolbox item.  
            /// </summary>  
            public void ConfigureToolboxItem(ToolboxItem item) {  
                if (item == null)  
                    return;  
  
                //hide from .NET Compact Framework  on the device designer.  
                ToolboxItemFilterAttribute newFilter = null;  
                if (item.TypeName == typeof(ToolboxControl1).ToString()) {  
                    newFilter = new ToolboxItemFilterAttribute("System.Windows.Forms.UserControl",  
                                                          ToolboxItemFilterType.Require);  
                }   
                else if (item.TypeName == typeof(ToolboxControl2).ToString()) {  
  
                    newFilter = new ToolboxItemFilterAttribute("System.Windows.Forms.UserControl",  
                                                          ToolboxItemFilterType.Prevent);  
                }  
                if (newFilter != null) {  
                    ArrayList array = new ArrayList();  
                    array.Add(newFilter);  
                    item.Filter = (ToolboxItemFilterAttribute[])  
                            array.ToArray(typeof(ToolboxItemFilterAttribute));  
                }  
            }  
        }  
    }  
    ```  
  
3.  Registrare un VSPackage come fornire un'implementazione di specifica di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> applicando un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> all'implementazione del package VS di <xref:Microsoft.VisualStudio.Shell.Package>.  
  
     L'esempio riportato di seguito informerebbe l'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] che il pacchetto implementata da `Vsip.ItemConfiguration.ItemConfiguration` fornisce la classe `Vsip.ItemConfiguration.ToolboxConfiguration` per supportare <xref:System.Drawing.Design.ToolboxItem>dinamico.  
  
    ```vb#  
    <ProvideToolboxItemsAttribute(3)> _   
    <DefaultRegistryRoot("Software\Microsoft\VisualStudio\8.0")> _   
    <InstalledProductRegistration(False, "#100", "#102", "1.0", IconResourceID := 400)> _   
    <ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)> _   
    <ProvideMenuResource(1000, 1)> _   
    <ProvideToolboxItemConfigurationAttribute(GetType(ToolboxConfig))> _   
    <GuidAttribute("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
    Public Class ItemConfiguration   
        Inherits Package   
    End Class  
    ```  
  
    ```c#  
    [ProvideToolboxItemsAttribute(3)]  
    [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\8.0")]  
    [InstalledProductRegistration(false, "#100", "#102", "1.0", IconResourceID = 400)]  
    [ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)]  
    [ProvideMenuResource(1000, 1)]  
    [ProvideToolboxItemConfigurationAttribute(typeof(ToolboxConfig))]  
  
    [GuidAttribute("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
    public class ItemConfiguration : Package  
    ```  
  
## Trascinamento della selezione personalizzate  
 Oltre all'aggiunta a **Casella degli strumenti** stesso, gli oggetti di <xref:System.Drawing.Design.ToolboxItem> e le relative implementazioni possono essere utilizzati per estendere il supporto del trascinamento della selezione nell'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Ciò può consentire i formati degli Appunti arbitrari da esporre a **Casella degli strumenti** e nell'editor.  
  
 Vspackage in base al pacchetto gestito Framework necessario registrare come fornire i formati degli Appunti personalizzati di elementi di **Casella degli strumenti** , applicando un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> la classe che implementa <xref:Microsoft.VisualStudio.Shell.Package>.  
  
 Per ulteriori informazioni sulla registrazione come provider di **Casella degli strumenti** , vedere [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md).  
  
#### Per fornire i formati degli Appunti personalizzati e trascinare supporto con i controlli della casella degli strumenti  
  
1.  Creare un'implementazione del delegato di <xref:System.Drawing.Design.ToolboxItemCreatorCallback> .  
  
     Questa implementazione deve restituire un oggetto di <xref:System.Drawing.Design.ToolboxItem> che supporta il formato degli Appunti non standard.  
  
     Per un esempio di implementazione di di un delegato di <xref:System.Drawing.Design.ToolboxItemCreatorCallback> , vedere <xref:System.Drawing.Design.ToolboxItem> e <xref:System.Drawing.Design.ToolboxItemCreatorCallback> fa riferimento alle pagine.  
  
2.  Fare questa implementazione del delegato di <xref:System.Drawing.Design.ToolboxItemCreatorCallback> disponibile a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **Casella degli strumenti** per una casella degli strumenti non standard chiamando <xref:System.Drawing.Design.IToolboxService.AddCreator%2A>.  
  
    ```vb#  
    <GuidAttribute("7D91995B-A799-485e-BFC7-C52545DFB5DD")> _   
    <ProvideToolboxFormatAttribute("MyFormat")> _   
    Public Class ItemConfiguration   
        Inherits MSVSIP.Package   
        Public Overloads Overrides Sub Initialize()   
            '"Adding this class as a ToolboxItemCreator");   
            Dim toolbox As IToolboxService = DirectCast(host.GetService(GetType(IToolboxService)), IToolboxService)   
            If toolbox IsNot Nothing Then   
                toolboxCreator = New ToolboxItemCreatorCallback(Me.OnCreateToolboxItem)   
                toolbox.AddCreator(toolboxCreator, "MyFormat", host)   
            End If   
        End Sub   
    End Class  
    ```  
  
    ```c#  
    [GuidAttribute("7D91995B-A799-485e-BFC7-C52545DFB5DD")]  
    [ProvideToolboxFormatAttribute("MyFormat")]  
    public class ItemConfiguration : MSVSIP.Package  
    {  
        public override void Initialize() {   
            /*  
            *  
            */  
            //"Adding this class as a ToolboxItemCreator");  
            IToolboxService toolbox = (IToolboxService)host.GetService(typeof(IToolboxService));  
            if (toolbox != null) {  
                toolboxCreator = new ToolboxItemCreatorCallback(this.OnCreateToolboxItem);  
                toolbox.AddCreator(toolboxCreator, "MyFormat", host);  
            }  
            private ToolboxItem OnCreateToolboxItem(object serializedData, string format) {  
               /*  
                *  
                */  
            }  
        }  
    }  
    ```  
  
### Argomenti della sezione  
 [Procedura: Supportare la funzionalità di trascinamento della selezione della casella degli strumenti](../misc/how-to-support-toolbox-drag-and-drop-functionality.md)  
 Viene descritto come implementare il trascinamento della selezione in una visualizzazione del documento.  
  
 [Procedura: Fornire elementi della casella degli strumenti personalizzata usando gli assembly di interoperabilità](../misc/how-to-provide-custom-toolbox-items-by-using-interop-assemblies.md)  
 Viene descritto aggiungere nuovi controlli ActiveX e i nuovi elementi a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **Casella degli strumenti**.  Questi nuovi elementi possono avere un formato degli Appunti standard o un formato personalizzato supportato dal package VS.  
  
 [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md)  
 Viene descritto come registrare un VSPackage come provider della casella degli strumenti.  Anche la creazione del supporto o mediante le altre funzionalità della casella degli strumenti.  
  
## Vedere anche  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)   
 [Procedure dettagliate sulla casella degli strumenti](../misc/toolbox-walkthroughs.md)   
 [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md)   
 [Procedura: Fornire elementi della casella degli strumenti personalizzata usando gli assembly di interoperabilità](../misc/how-to-provide-custom-toolbox-items-by-using-interop-assemblies.md)   
 [Gestione della casella degli strumenti](../misc/managing-the-toolbox.md)   
 [Procedura: controllare la Casella degli strumenti](../Topic/How%20to:%20Control%20the%20Toolbox.md)