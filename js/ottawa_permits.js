jQuery(document).ready(function ($) {

	/* ENGLISH */
	
	if (document.URL.indexOf("/en/") >= 0 ) {
	
	// Get initial value of select box
	var $currentVal = $('#edit-sort-by option:selected').text();
	
	// Replace panel text with english
	$('#sort-type .block-inner .block-content .field-items').replaceWith('<p>Use the search and toggle filters to find the services you are looking for.</p>');

	// Set default to MOST POPULAR
	$('#sort-type h2.pane-title.block-title').replaceWith('<h2 class="pane-title block-title">Services order: Most Popular</h2>');
	
	$( 'input#edit-submit-service-ottawa-updated' ).click(function()

		{
			// Get updated value of select box
		    var $currentVal = $('#edit-sort-by option:selected').text();
			
			// If currently alphabetical --> make most popular
			if ( $currentVal == 'Alphabetical')
			{
				//alert( "Alpha" );
				$('#sort-type h2.pane-title.block-title').replaceWith('<h2 class="pane-title block-title">' + Drupal.t('Services order: Alphabetically') + '</h2>');
			}
			
			// If currently most popular --> make alphabetical
			if ( $currentVal == 'Most popular' )
			{
				//alert( "Popular" );
				$('#sort-type h2.pane-title.block-title').replaceWith('<h2 class="pane-title block-title">' + Drupal.t('Services order: Most popular') + '</h2>');
			}
		}
	);
	
	}
	
	/* FRANCAIS */
	
	if (document.URL.indexOf("/fr/") >= 0 ) {
	
	// Get initial value of select box
	var $currentVal = $('#edit-sort-by option:selected').text();
	
	// Replace panel text with french
	$('#sort-type .block-inner .block-content .field-items').replaceWith('<p>Utilisez les filtres de recherche et de basculement pour trouver les services que vous cherchez.</p>');
	
	// Set default to MOST POPULAR
	$('#sort-type h2.pane-title.block-title').replaceWith('<h2 class="pane-title block-title">Ordre des services: Plus populaires</h2>');
	
	$( 'input#edit-submit-service-ottawa-updated' ).click(function()

		{
			// Get updated value of select box
		    var $currentVal = $('#edit-sort-by option:selected').text();
			
			// If currently alphabetical --> make most popular
			if ( $currentVal == 'Alphabétique')
			{
				//alert( "Alpha" );
				$('#sort-type h2.pane-title.block-title').replaceWith('<h2 class="pane-title block-title">' + Drupal.t('Ordre des services: Alphabétique') + '</h2>');
			}
			
			// If currently most popular --> make alphabetical
			if ( $currentVal == 'Plus populaires' )
			{
				//alert( "Popular" );
				$('#sort-type h2.pane-title.block-title').replaceWith('<h2 class="pane-title block-title">' + Drupal.t('Ordre des services: Plus populaires') + '</h2>');
			}
		}
	);
	
	}
	
}); //end document ready